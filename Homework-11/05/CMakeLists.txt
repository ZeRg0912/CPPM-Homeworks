cmake_minimum_required(VERSION 3.10)
project(05)
include_directories(FiguresLib)
set(source_exe 05.cpp)
set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)
add_executable(05 ${source_exe})
set(RACING_LIB_PATH ${PROJECT_BINARY_DIR}/FiguresLib)
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)
add_subdirectory(FiguresLib)
target_link_libraries(05 Figures_lib)
#file(COPY ${RACING_LIB_PATH}/race_lib.dll DESTINATION ${EXECUTABLE_OUTPUT_PATH})
add_custom_command(TARGET 05 POST_BUILD        # Adds a post-build event to MyTest
    COMMAND ${CMAKE_COMMAND} -E copy_if_different  # which executes "cmake - E copy_if_different..."
        "${RACING_LIB_PATH}/Figures_lib.dll"      # <--this is in-file
        $<TARGET_FILE_DIR:05>)                 # <--this is out-file pat