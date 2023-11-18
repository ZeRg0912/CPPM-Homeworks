cmake_minimum_required(VERSION 3.10)
project(race_lib)
set(source_lib Race.cpp
Race/RaceAir.cpp
Race/RaceAirGround.cpp
Race/RaceGround.cpp
Transports/TRANSPORT.cpp
Transports/Flying/AIR.cpp
Transports/Flying/BROOMSTICK.cpp
Transports/Flying/EAGLE.cpp
Transports/Flying/MAGIC_CARPET.cpp
Transports/Ground/GROUND.cpp
Transports/Ground/ALL_TERRAIN_BOOTS.cpp
Transports/Ground/CAMEL.cpp
Transports/Ground/CENTAUR.cpp
Transports/Ground/FAST_CAMEL.cpp
)
add_library(race_lib SHARED ${source_lib})