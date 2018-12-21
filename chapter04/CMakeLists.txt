# CMakeList.txt : CMake project for CMakeStandard, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

# Add source to this project's executable.
add_executable(Expression Expression.cpp)
add_executable(Grader Grader.cpp)
add_executable(NewGrader NewGrader.cpp)
add_executable(Years Years.cpp)
# TODO: Add tests and install targets if needed.
install(TARGETS Expression Grader NewGrader Years DESTINATION bin)

