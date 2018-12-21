# CMakeList.txt : CMake project for CMakeStandard, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

# Add source to this project's executable.
add_executable(Rectangle2 Rectangle.cpp Rectangle.hpp)
add_executable(Tricycle2 Tricycle.cpp Tricycle.hpp)
# TODO: Add tests and install targets if needed.
install(TARGETS Rectangle2 Tricycle2 DESTINATION bin)