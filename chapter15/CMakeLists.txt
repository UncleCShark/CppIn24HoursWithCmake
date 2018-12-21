# CMakeList.txt : CMake project for CMakeStandard, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

# Add source to this project's executable.
add_executable(Assignment2 Assignment.cpp)
add_executable(Counter Counter.cpp)
add_executable(Counter2 Counter2.cpp)
add_executable(Counter3 Counter3.cpp)
add_executable(Counter4 Counter4.cpp)
add_executable(Counter5 Counter5.cpp)
add_executable(Counter6 Counter6.cpp)
add_executable(Counter7 Counter7.cpp)

# TODO: Add tests and install targets if needed.
install(TARGETS Counter Counter2 Counter3 Counter4 Counter5 Counter6 Counter7 DESTINATION bin)
