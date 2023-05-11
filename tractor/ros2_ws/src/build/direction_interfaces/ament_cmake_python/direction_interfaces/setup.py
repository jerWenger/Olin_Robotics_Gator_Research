from setuptools import find_packages
from setuptools import setup

setup(
    name='direction_interfaces',
    version='0.0.0',
    packages=find_packages(
        include=('direction_interfaces', 'direction_interfaces.*')),
)
