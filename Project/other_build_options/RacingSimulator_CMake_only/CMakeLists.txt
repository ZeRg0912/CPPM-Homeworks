cmake_minimum_required(VERSION 3.10)
project(RaceSimulator)
include_directories(Libs/RacingLib)
set(source_exe RacingSimulator.h RacingSimulator.cpp)
add_executable(RaceSimulator ${source_exe})
SET( CMAKE_RUNTIME_OUTPUT_DIRECTORY_DEBUG "${OUTPUT_DIRECTORY}")
SET( CMAKE_RUNTIME_OUTPUT_DIRECTORY_RELEASE "${OUTPUT_DIRECTORY}")
SET( CMAKE_LIBRARY_OUTPUT_DIRECTORY_DEBUG "${OUTPUT_DIRECTORY}")
SET( CMAKE_LIBRARY_OUTPUT_DIRECTORY_RELEASE "${OUTPUT_DIRECTORY}")
SET( CMAKE_ARCHIVE_OUTPUT_DIRECTORY_DEBUG "${OUTPUT_DIRECTORY}")
SET( CMAKE_ARCHIVE_OUTPUT_DIRECTORY_RELEASE "${OUTPUT_DIRECTORY}")
set(RACING_LIB_PATH ${PROJECT_BINARY_DIR}/Libs/RacingLib)
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)
add_subdirectory(Libs/RacingLib)
target_link_libraries(RaceSimulator race_lib)
#file(COPY ${RACING_LIB_PATH}/race_lib.dll DESTINATION ${EXECUTABLE_OUTPUT_PATH})
add_custom_command(TARGET RaceSimulator POST_BUILD        # Adds a post-build event to MyTest
    COMMAND ${CMAKE_COMMAND} -E copy_if_different  # which executes "cmake - E copy_if_different..."
        "${RACING_LIB_PATH}/race_lib.dll"      # <--this is in-file
        ${EXECUTABLE_OUTPUT_PATH}/Debug)                 # <--this is out-file path