cmake_minimum_required(VERSION 3.16)
set(BIN "stitcher")
PROJECT (stitcher)
add_subdirectory("../Math" "Math")
add_subdirectory("../Mesh" "Mesh")
include_directories(.)
FILE(GLOB EXE_SRC "*.cpp" "*.c")
include_directories("../Math/inc/")
include_directories("../Mesh/inc")
 
add_executable(${BIN} ${EXE_SRC} resource/icons.rc)

target_link_libraries(${BIN} Mesh MathLib)
