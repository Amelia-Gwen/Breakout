cmake_minimum_required(VERSION 3.16)
project(Breakout)

set(CMAKE_CXX_STANDARD 17)

add_executable(Breakout main.cpp Breakout.cpp Breakout.h)

set(GLFW_BUILD_DOCS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_TESTS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_EXAMPLES OFF CACHE BOOL "" FORCE)

include_directories(C:/SFML-2.5.1/include)
link_directories(C:/SFML-2.5.1/lib)

add_subdirectory(C:/Users/Andar/CLionProjects/Breakout/glfw-3.3.2)

find_package(OpenGL REQUIRED)

target_link_libraries(Breakout sfml-audio-d sfml-graphics-d sfml-network-d sfml-system-d sfml-window-d glfw OpenGL::GL)
