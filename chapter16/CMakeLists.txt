# CMakeList.txt : CMake project for CMakeStandard, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

# Add source to this project's executable.
add_executable(Mammal1 Mammal1.cpp)
add_executable(Mammal2 Mammal2.cpp)
add_executable(Mammal3 Mammal3.cpp)
add_executable(Mammal4 Mammal4.cpp)
add_executable(Mammal5 Mammal5.cpp)
add_executable(Mammal6 Mammal6.cpp)
add_executable(Mammal7 Mammal7.cpp)
# TODO: Add tests and install targets if needed.
install(TARGETS Mammal1 Mammal2 Mammal3 Mammal4 Mammal5 Mammal6 Mammal7 DESTINATION bin)

