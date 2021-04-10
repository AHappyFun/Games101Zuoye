cmake_minimum_required(VERSION 3.10)
project(Rasterizer)

find_package(OpenCV_REQUIRED)
include_directories(EIGEN3_INCLUDE_DIR)

set(CMAKE_CXX_STANDARD 17)
SET(CMAKE_TOOLCHAIN_FILE "D:\\KaifaHuanjin\\vcpkg\\scripts\\buildsystems\\vcpkg.cmake")
include_directories(/usr/local/include)

add_executable(Rasterizer main.cpp rasterizer.hpp rasterizer.cpp Triangle.hpp Triangle.cpp)
target_link_libraries(Rasterizer ${OpenCV_LIBRARIES})
