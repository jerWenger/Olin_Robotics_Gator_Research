from setuptools import find_packages
from setuptools import setup

setup(
    name='gps_interfaces',
    version='0.0.0',
    packages=find_packages(
        include=('gps_interfaces', 'gps_interfaces.*')),
)
