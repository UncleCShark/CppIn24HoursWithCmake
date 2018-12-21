# CMakeList.txt : CMake project for CMakeStandard, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

# Add source to this project's executable.
add_executable(Mammal8 Mammal8.cpp)
add_executable(Mammal9 Mammal9.cpp)
add_executable(Mammal10 Mammal10.cpp)
add_executable(Mammal11 Mammal11.cpp)
# TODO: Add tests and install targets if needed.
install(TARGETS Mammal8 Mammal9 Mammal10 Mammal11 DESTINATION bin)