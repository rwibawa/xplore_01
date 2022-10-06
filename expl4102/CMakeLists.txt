# example library
add_library(vital_stats vital_stats.cpp)

# main code
add_executable(vital main.cpp)
target_link_libraries(vital vital_stats)