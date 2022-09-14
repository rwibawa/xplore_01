project(XPlore_01)
cmake_minimum_required(VERSION 3.0)
set(APPNAME "List0101")

if (WIN32)
  set(CMAKE_CXX_STANDARD 11)
else()
  set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
endif(

)
add_executable(expl4203 expl4203.cpp)