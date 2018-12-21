# CMakeList.txt : CMake project for CMakeStandard, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

# Add source to this project's executable.
add_executable(DeepCopy DeepCopy.cpp)
add_executable(Rectangle3 Rectangle.cpp)
add_executable(Rectangle4 Rectangle2.cpp)
# TODO: Add tests and install targets if needed.
install(TARGETS DeepCopy Rectangle3 Rectangle4 DESTINATION bin)
