
# CMakeList.txt : CMake project for CMakeStandard, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

# Add source to this project's executable.
add_executable(Rectangle Rectangle.cpp)
add_executable(NewRectangle NewRectangle.cpp)
add_executable(Sizer Sizer.cpp)
# TODO: Add tests and install targets if needed.
install(TARGETS Rectangle NewRectangle Sizer DESTINATION bin)
