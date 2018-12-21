# CMakeList.txt : CMake project for CMakeStandard, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

# Add source to this project's executable.
add_executable(Addresser Addresser.cpp)
add_executable(Heap Heap.cpp)
add_executable(Pointer Pointer.cpp)
add_executable(PointerCheck PointerCheck.cpp)
# TODO: Add tests and install targets if needed.
install(TARGETS Addresser Heap Pointer PointerCheck DESTINATION bin)