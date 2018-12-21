# CMakeList.txt : CMake project for CMakeStandard, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

# Add source to this project's executable.
add_executable(Animal Animal.cpp)
add_executable(Mammal12 Mammal12.cpp)
add_executable(Mammal13 Mammal13.cpp)
add_executable(Shape Shape.cpp)
add_executable(Shape2 Shape2.cpp)
# TODO: Add tests and install targets if needed.
install(TARGETS Animal Mammal12 Mammal13 Shape Shape2 DESTINATION bin)

