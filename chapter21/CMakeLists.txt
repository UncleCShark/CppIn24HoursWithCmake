# CMakeList.txt : CMake project for CMakeStandard, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

# Add source to this project's executable.
add_executable(Circle Circle.cpp)
add_executable(Combat Combat.cpp)
add_executable(Swapper Swapper.cpp)
# TODO: Add tests and install targets if needed.
install(TARGETS Circle Combat Swapper DESTINATION bin)
