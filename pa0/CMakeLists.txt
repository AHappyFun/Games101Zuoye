cmake_minimum_required (VERSION 3.10)
project (Transformation)


find_package(OpenCV_REQUIRED)
include_directories(EIGEN3_INCLUDE_DIR)

set(CMAKE_CXX_STANDARD 17)

SET(CMAKE_TOOLCHAIN_FILE "D:\\KaifaHuanjin\\vcpkg\\scripts\\buildsystems\\vcpkg.cmake")

include_directories(/usr/local/include)
include_directories("C:/Program Files (x86)/Eigen3/include/eigen3")

add_executable (Transformation main.cpp Util.h)
