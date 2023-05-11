import serial
import serial.tools.list_ports as list_ports
import time,rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist

"""
writer = serialWrite.Serial_cmd()
time.sleep(2)
writer.write_data_to_arduino("0.2,0.0\n")
print("past first write")
time.sleep(2)
writer.write_data_to_arduino("0.0,0.0\n")
print("past second write")
"""

class Serial_cmd:
    Arduino_IDs = ((0x2341, 0x0043), (0x2341, 0x0001), 
                   (0x2A03, 0x0043), (0x2341, 0x0243), 
                   (0x0403, 0x6001), (0x1A86, 0x7523),
                   (0x9025, 0x0067))
    
    def __init__(self, port=''):
        print("test abc")
        if port == '':
            self.dev = None
            self.connected = False
            devices = list_ports.comports()
            for device in devices:
                print(device)
                print(type(device))
                print(device.vid)
                print(type(device.vid))
                if device.vid == 9025:
                    print("before try")
                    try:
                        self.dev = serial.Serial(device.device, 115200)
                        self.connected = True
                        print('Connected to {!s}...'.format(device.device))
                    except:
                        print("an exception occurred :(")
                if self.connected:
                    break
        else:
            try:
                self.dev = serial.Serial(port, 9600)
                self.connected = True
            except:
                self.edev = None
                self.connected = False
    def write_data_to_arduino(self, string_to_write):
        if self.connected:
            self.dev.write(string_to_write.encode())
        else:
            raise Exception("self not connected!")
    def read_data(self):
        if self.connected:
            try:
                print(self.dev.readline().decode().rstrip())
            except:
                pass
    def check_arduino_print(self):
        if self.connected:
            try:
                return self.dev.readline().decode().rstrip()
            except:
                pass

class TractorWriterNode(Node):
    def __init__(self):
        super().__init__('tractor_writer')
        self.create_timer(0.1, self.run_loop)
        self.create_subscription(Twist, 'cmd_vel', self.process_twist, 10)

        self.linear = 0.0
        self.angular = 0.0
        self.writer = Serial_cmd()
        self.print_debugging = True
        self.print_arduino_output = True

        print("initializing")
        if not self.writer.connected:
            raise Exception("error connecting")

    def run_loop(self):
        start = time.time()
        to_print = ""
        string_to_write = f"<{self.linear},{self.angular}\n"
        if self.print_debugging:
            print(string_to_write)
        read = False
        while self.writer.dev.in_waiting:
            printed_ard_val = self.writer.check_arduino_print()
            read = (printed_ard_val != "")
            if (self.print_arduino_output):
                print(printed_ard_val)
        if read:
            if self.print_debugging:
                print(f"writing: {string_to_write}")
                print(f"elapsed time: {time.time() - start}")
            self.writer.write_data_to_arduino(string_to_write)            
        time.sleep(0.1)

    def process_twist(self, msg):
        self.linear = msg.linear.x
        self.angular = msg.angular.z
    

def main(args=None):
    rclpy.init(args=args)
    node = TractorWriterNode()
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == '__main__':
    main()
