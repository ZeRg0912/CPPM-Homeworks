cmake_minimum_required (VERSION 3.8)

add_library (RacingLib RacingLib.cpp)
target_link_libraries (RacingLib Libs/)

add_executable (RacingSimulator "RacingSimulator.cpp")
target_link_libraries (RacingSimulator RacingLib)
