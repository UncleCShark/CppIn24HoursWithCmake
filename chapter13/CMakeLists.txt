# CMakeList.txt : CMake project for CMakeStandard, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

# Add source to this project's executable.
add_executable(ConstPasser ConstPasser.cpp)
add_executable(Leak Leak.cpp)
add_executable(ObjectRef ObjectRef.cpp)
add_executable(RefPasser RefPasser.cpp)
add_executable(RefReturn RefReturn.cpp)
# TODO: Add tests and install targets if needed.
install(TARGETS Leak ObjectRef RefPasser RefReturn DESTINATION bin)