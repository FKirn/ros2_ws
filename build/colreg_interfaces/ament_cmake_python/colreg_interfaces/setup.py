from setuptools import find_packages
from setuptools import setup

setup(
    name='colreg_interfaces',
    version='0.0.0',
    packages=find_packages(
        include=('colreg_interfaces', 'colreg_interfaces.*')),
)
