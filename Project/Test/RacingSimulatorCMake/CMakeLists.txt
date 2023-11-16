cmake_minimum_required (VERSION 3.22.0)

project(RacingSimulator)
add_library (RacingLib  RacingLib.cpp)
add_executable (RacingSimulator "RacingSimulator.cpp")
