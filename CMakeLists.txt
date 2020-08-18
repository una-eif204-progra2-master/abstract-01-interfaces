cmake_minimum_required(VERSION 3.14)
project(abstract-01-interface)

set(CMAKE_CXX_STANDARD 17)
add_executable(sample Main.cpp IPlayer.h IPlayer.cpp IRecorder.cpp IRecorder.h TapePlayer.cpp TapePlayer.h)