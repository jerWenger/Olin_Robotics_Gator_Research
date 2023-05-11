#include <Servo.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

// Define Input Connections
#define CHRH 7 // right stick horz
#define CHRV 2// right stick vert
#define CHLV 3 // left stick vert
#define CHLH 4 // left stick horz
#define CHSWA 5 // SWA 2-pos switch
#define CHSWC 6 // SWC 3-pos switch
#define steeringWritePin 9
#define gasWritePin 11

Servo roboClawSteering;
Servo roboClawGas;

const int leftVertUp = 2050;
const int leftVertMid = 1500;
const int leftVertDown = 1000;
const int leftVertRange = leftVertUp - leftVertDown;

const int rightHorzLeft = 1032;
const int rightHorzMid = 1515;
const int rightHorzRight = 1988;
const int rightHorzRange = rightHorzRight - rightHorzLeft;

const int motorSteeringMid = 1350;
const int motorSteeringMaxMag = 1100; // 450 in either direction off mid

const int motorGasMid = 1370;
const int motorGasMaxMag =
    1000; // in either direction off mid, sign controlled by SWA

const int SWAUp = 2071;
const int SWADown = 993;
const int SWACutoff = 2000;
const int SWABottomCutoff = 800;

const int SWCUp = 2088;
const int SWCUpperCutoff = 1800;
const int SWCMid = 1488;
const int SWCLowerCutoff = 1250;
const int SWCDown = 994;
const int SWCBottomCutoff = 800;
int count = 0;
bool printChVals = false;
bool printMappedVals = false;
bool printWriteVals = false;
bool printSerialVals = true;
long int t1 = 0;
long int t0 = 0;


float ch_LV_val, ch_RH_val, ch_SWA_val, ch_SWC_val;
// float ch_LH_val, ch_RV_val;
float LV_pos, RH_pos;
// float LH_pos, RV_pos;
int SWA_pos, SWC_pos;
float write_val_gas, write_val_steering;
// add write vals for other actuators
float serial_linear, serial_angular = 0.0;
// add vals for other serial inputs

const byte numChars = 32;
char receivedChars[numChars];   // an array to store the received data
boolean newData = true;

bool stringStarted = false;
bool stringComplete = false;
String inputString;

// Read the number of a specified channel and convert to the range provided.
// If the channel is off, return the default value
int readChannel(int channelInput, int minLimit, int maxLimit,
                int defaultValue) {
  int ch = pulseIn(channelInput, HIGH, 30000);
  return ch;
}

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  // Set up serial monitor
  Serial.begin(115200);
  roboClawSteering.attach(steeringWritePin);
  roboClawGas.attach(gasWritePin);

  // Set all pins as inputs
  pinMode(CHLV, INPUT);
  pinMode(CHLH, INPUT);
  pinMode(CHRH, INPUT);
  pinMode(CHRV, INPUT);
  pinMode(CHSWA, INPUT);
  pinMode(CHSWC, INPUT);
  int count = 0;
}

void loop() {
  // t1 = millis();
  // long int diff = t1 - t0;
  while (Serial.available() > 0){
    char incomingByte = Serial.read();
    if (stringStarted){
      inputString += incomingByte;
    } else if (incomingByte == '<'){
      inputString = "<";
      stringStarted = true;
    } else {
      continue;
    }
    if (incomingByte == '\n'){
      stringComplete = true;
    }
  }
  if (stringComplete) {
    // remove newline character from string:
    inputString.trim();
    // parse the string into separate commands:
    String commandArray[2];
    int commaIndex = inputString.indexOf(',');
    if (commaIndex > 0) {
      commandArray[0] = inputString.substring(1, commaIndex);
      serial_linear = commandArray[0].toFloat();
      commandArray[1] = inputString.substring(commaIndex + 1, inputString.length());
      serial_angular = commandArray[1].toFloat();
    }
    
    // reset the inputString and stringComplete flag:
    inputString = "";
    stringComplete = false;
  }
  if (serial_linear >= 0.5){
    digitalWrite(LED_BUILTIN, HIGH);
    // Serial.println("high");
  } else {
    digitalWrite(LED_BUILTIN, LOW);
    // Serial.println("low");
  }
  
  // Get values for each channel
  getSWCPos();
  if (SWC_pos == 1){
    getChValues();
    mapChValuesToPos();
  }
  calcWriteVals();
  sendWriteVals();
  if (count > 19) {
    if (printChVals){
      Serial.print("ChVals: ");
      Serial.print("Left Vert: ");
      Serial.print(ch_LV_val);
      Serial.print(" | Right Horz: ");
      Serial.print(ch_RH_val);
      Serial.print(" | SWA: ");
      Serial.print(ch_SWA_val);
      Serial.print(" | SWC: ");
      Serial.print(ch_SWC_val);
      Serial.println("");
    }
    if (printMappedVals){
      Serial.print("MappedVals: ");
      Serial.print("Left Vert: ");
      Serial.print(LV_pos);
      Serial.print(" | Right Horz: ");
      Serial.print(RH_pos);
      Serial.print(" | SWA: ");
      Serial.print(SWA_pos);
      Serial.print(" | SWC: ");
      Serial.print(SWC_pos);
      Serial.println("");
    }
    if (printWriteVals) {
      Serial.print("Sending ");
      Serial.print(write_val_gas);
      Serial.print(" to roboClawGas. ");
      Serial.print("Sending ");
      Serial.print(write_val_steering);
      Serial.println(" to roboClawSteering");
    }
    if (printSerialVals){
      Serial.print("Getting: ");
      Serial.print(serial_linear);
      Serial.print(" linear from serial. Getting ");
      Serial.print(serial_angular);
      Serial.println(" angular from serial.");
    }
    if (printSerialVals || printWriteVals || printMappedVals || printChVals){
      
      
      Serial.println("");
    }
    count = 0;
    
  }
  
  count++;
  Serial.println("i am working");
  delay(50);
}


void recvWithEndMarker() {
    static byte ndx = 0;
    char endMarker = '\n';
    char startMarker = '<';
    char rc;
    bool gottenStart = false;
    
    while (Serial.available() > 0 && newData == false) {
        //Serial.println("while loop start");
        rc = Serial.read();
        //Serial.println(rc);

        if (rc == startMarker){
          gottenStart = true;
          //Serial.println("gotten start");
        }

        if (!gottenStart){
          //Serial.println("hasn't gotten start yet");
          continue;
        }
        //Serial.println("has gotten start");

        

        if (rc != endMarker) {
            if (rc != startMarker){
              receivedChars[ndx] = rc;
              ndx++;
              if (ndx >= numChars) {
                  ndx = numChars - 1;
              }
            }
            
        }
        else {
            receivedChars[ndx] = '\0'; // terminate the string
            ndx = 0;
            newData = true;
        }
    }
}

void showNewData() {
    if (newData == true) {
        //Serial.println(receivedChars);
        char* velVal = strtok(receivedChars, ",");
        char* firstValChar = velVal;
        velVal = strtok(NULL, ",");
        char* secondValChar = velVal;
        float firstFloat = atof(firstValChar);
        float secondFloat = atof(secondValChar);
        //Serial.print("first float: ");
        //Serial.print(firstFloat);
        //Serial.print(" | second float: ");
        //Serial.println(secondFloat);

        serial_linear = firstFloat;
        serial_angular = secondFloat;
        newData = false;
    }
}

void calcWriteVals() {
  switch (SWC_pos){
    case 2:
      write_val_gas = motorGasMid;
      write_val_steering = motorSteeringMid;
      break;
    case 1:
      write_val_gas = (LV_pos * motorGasMaxMag * SWA_pos * -1) + motorGasMid;
      write_val_steering = (RH_pos * motorSteeringMaxMag * -1) + motorSteeringMid;
      break;
    case 0:
      write_val_gas = (serial_linear * motorGasMaxMag * -1) + motorGasMid; // may need a -1 mult on serial_linear
      write_val_steering = (serial_angular * motorSteeringMaxMag) + motorSteeringMid; // may need a -1 on the serial_angular
      break;
    default:
      write_val_gas = motorGasMid;
      write_val_steering = motorSteeringMid;
  }    
}

void sendWriteVals() {
  roboClawGas.writeMicroseconds(write_val_gas);
  roboClawSteering.writeMicroseconds(write_val_steering);
  /*
  add other actuator write calls here
  */
}

void getChValues() {
  ch_RH_val = readChannel(CHRH, -100, 100, 0);
  ch_LV_val = readChannel(CHLV, -100, 100, 0);
  ch_SWA_val = readChannel(CHSWA, -100, 100, 0);
  /*
  ch_RV_cal = readChannel(CHRV, -100, 100, 0);
  ch_LH_cal = readChannel(CHLH, -100, 100, 0);
  */
}

void getSWCPos(){
  ch_SWC_val = readChannel(CHSWC, -100, 100, 0);
    if (ch_SWC_val < SWCBottomCutoff || ch_SWC_val > SWCUpperCutoff) {
    SWC_pos = 2;
  } else if (ch_SWC_val < SWCLowerCutoff) {
    SWC_pos = 0;
  } else {
    SWC_pos = 1;
  }
}

void mapChValuesToPos() {
  LV_pos = (ch_LV_val - leftVertDown) / leftVertRange;
  if (LV_pos < 0) {
    LV_pos = 0;
  }
  RH_pos = (ch_RH_val - rightHorzMid) / rightHorzRange * 2;
  if (RH_pos < -1.2) {
    RH_pos = 0;
  } else if (RH_pos < -1) {
    RH_pos = -1;
  }
  if (ch_SWA_val > SWACutoff) {
    SWA_pos = 1;
  } else if (ch_SWA_val > SWABottomCutoff) {
    SWA_pos = -1;
  } else {
    SWA_pos = 0;
  }
}
