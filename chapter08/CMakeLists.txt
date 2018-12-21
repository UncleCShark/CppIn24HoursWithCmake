# CMakeList.txt : CMake project for CMakeStandard, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

# Add source to this project's executable.
add_executable(NewTricycle NewTricycle.cpp)
add_executable(Tricycle Tricycle.cpp)
# TODO: Add tests and install targets if needed.
install(TARGETS NewTricycle Tricycle DESTINATION bin)
