cmake_minimum_required(VERSION 3.10)
project(03)
include_directories(Libs/Leaver)
set(source_exe 03.cpp)
set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)
add_executable(03 ${source_exe})
set(LEAVER_LIB_PATH ${PROJECT_BINARY_DIR}/Libs/Leaver)
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)
add_subdirectory(Libs/Leaver)
target_link_libraries(03 LeaverLib)
#file(COPY ${LEAVER_LIB_PATH}/LeaverLib.dll DESTINATION ${EXECUTABLE_OUTPUT_PATH})
add_custom_command(TARGET 03 POST_BUILD             # Adds a post-build event to MyTest
    COMMAND ${CMAKE_COMMAND} -E copy_if_different   # which executes "cmake - E copy_if_different..."
    "${LEAVER_LIB_PATH}/LeaverLib.dll"              # <--this is in-file
    $<TARGET_FILE_DIR:03>)                          # <--this is out-file pat