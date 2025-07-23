cmake_minimum_required(VERSION 3.16)
project(ncurses_example)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Curses REQUIRED)
include_directories(${CURSES_INCLUDE_DIR})

add_executable(ncurses_example src/main.cpp)
target_link_libraries(ncurses_example ${CURSES_LIBRARIES})
