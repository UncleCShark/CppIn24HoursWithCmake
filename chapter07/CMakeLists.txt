# CMakeList.txt : CMake project for CMakeStandard, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

# Add source to this project's executable.
add_executable(Box Box.cpp)
add_executable(BridgeKeeper BridgeKeeper.cpp)
add_executable(StringCopier StringCopier.cpp)
add_executable(WeightGoals  WeightGoals.cpp)
# TODO: Add tests and install targets if needed.
install(TARGETS Box BridgeKeeper StringCopier WeightGoals DESTINATION bin)


