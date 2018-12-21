# CMakeList.txt : CMake project for CMakeStandard, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

# Add source to this project's executable.
add_executable(Area Area.cpp)
add_executable(AreaCube AreaCube.cpp)
add_executable(Global Global.cpp)
add_executable(LeapYear LeapYear.cpp)
add_executable(Temperature Temperature.cpp)
# TODO: Add tests and install targets if needed.
install(TARGETS Area AreaCube Global LeapYear Temperature DESTINATION bin)

