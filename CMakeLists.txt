cmake_minimum_required(VERSION 3.8)

#set(CMAKE_CXX_COMPILER "clang++")
#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -L/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/lib")


project(HETF CXX)
add_executable(hetf main.cpp)
# C++11/14/17
#target_compile_features(hetf PUBLIC cxx_std_11)
