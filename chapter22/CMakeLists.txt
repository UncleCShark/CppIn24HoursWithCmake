# CMakeList.txt : CMake project for CMakeStandard, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

# Add source to this project's executable.
add_executable(Driver Driver.cpp)
#add_executable(PostMasterMessage PostMasterMessage.cpp)
add_executable(SimpleEvent SimpleEvent.cpp)

# TODO: Add tests and install targets if needed.
install(TARGETS Driver SimpleEvent DESTINATION bin)

