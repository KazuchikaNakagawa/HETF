cmake_minimum_required(VERSION 3.8)
project(HETF CXX)

add_executable(a.out main.cpp)
# C++11/14/17
target_compile_features(a.out PUBLIC cxx_std_11)

set(CMAKE_CXX_COMPILER "clang++")
set(CMAKE_EXE_LINKER_FLAGS "-L/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/lib")
