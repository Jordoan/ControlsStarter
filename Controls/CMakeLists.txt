cmake_minimum_required(VERSION 3.17)
project(ControlsStarter C)

set(CMAKE_C_STANDARD 99)

add_executable(ControlsStarter main.c MotorController.c simulate.py)