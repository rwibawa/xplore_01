cmake_minimum_required(VERSION 3.0)
set(APPNAME "expl-cpp")

project(${APPNAME} CXX ASM)

# require C++11
if (WIN32)
  set(CMAKE_CXX_STANDARD 11)
else()
  set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
endif()

set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)

#Add main source directory
add_subdirectory(expl4101)