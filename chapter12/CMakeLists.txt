# CMakeList.txt : CMake project for CMakeStandard, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

# Add source to this project's executable.
add_executable(Assignment Assignment.cpp)
add_executable(PointerSwap PointerSwap.cpp)
add_executable(Reference Reference.cpp)
add_executable(Reference2 Reference2.cpp)
add_executable(ReferenceSwap ReferenceSwap.cpp)
add_executable(ReturnPointer ReturnPointer.cpp)
add_executable(ReturnReference ReturnReference.cpp)
add_executable(ValuePasser ValuePasser.cpp)
# TODO: Add tests and install targets if needed.
install(TARGETS 
Assignment 
PointerSwap 
Reference 
Reference2 
ReferenceSwap 
ReferenceSwap 
ReturnReference ValuePasser DESTINATION bin)