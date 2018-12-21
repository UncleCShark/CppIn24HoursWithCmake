# CMakeList.txt : CMake project for CMakeStandard, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

# Add source to this project's executable.
add_executable(BadTeacher BadTeacher.cpp)
add_executable(Badger Badger.cpp)
add_executable(BoxMaker BoxMaker.cpp)
add_executable(Fifteens Fifteens.cpp)
add_executable(Fourteens Fourteens.cpp)
add_executable(MultTable MultTable.cpp)
add_executable(Thirteens Thirteens.cpp)
# TODO: Add tests and install targets if needed.
install(TARGETS BadTeacher Badger BoxMaker Fifteens Fourteens MultTable Thirteens DESTINATION bin)

