# CMakeList.txt : CMake project for CMakeStandard, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

# Add source to this project's executable.
add_executable(ArrayFunction ArrayFunction.cpp)
add_executable(Employee  Employee.cpp String.hpp)
add_executable(FunctionPasser FunctionPasser.cpp)
add_executable(FunctionPointer FunctionPointer.cpp)
add_executable(MPFunction MPFunction.cpp)
add_executable(MemberPointer MemberPointer.cpp)
add_executable(StaticCat StaticCat.cpp)
add_executable(StaticFunction StaticFunction.cpp)

# TODO: Add tests and install targets if needed.
install(TARGETS 
ArrayFunction 
Employee 
FunctionPasser 
FunctionPointer 
MPFunction 
MemberPointer StaticCat StaticFunction DESTINATION bin)


