cmake_minimum_required(VERSION 3.23)
project(MusicLibrary)

set(CMAKE_CXX_STANDARD 14)

add_executable(MusicLibrary main.cpp library.cpp library.h string_tools.cpp string_tools.h)
