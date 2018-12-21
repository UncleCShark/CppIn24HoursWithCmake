# CMakeList.txt : CMake project for CMakeStandard, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

# Add source to this project's executable.
add_executable(ConstPointer ConstPointer.cpp)
add_executable(DataMember DataMember.cpp)
add_executable(HeapAccessor HeapAccessor.cpp)
add_executable(HeapCreator HeapCreator.cpp)
add_executable(This This.cpp)
# TODO: Add tests and install targets if needed.
install(TARGETS ConstPointer DataMember HeapAccessor HeapCreator DESTINATION bin)