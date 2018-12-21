# CppIn24HoursWithCmake
Two in One solution - using C++ and Modern Cmake build system. A project  based on  C++ source code from Sams Teach Yourself C++ in 24 Hours 5th Ed ISBN-13: 978-0-672-33331-6. The code presented throughout the book is standard ANSI/ISO C++ and should work
with any development environment for C++ that’s up-to-date. This code should work on Linux too. Can you try and give a holler.

# Getting Started

## Prerequisites to run the samples
- Install Cmake and your prefered C++ compiler toolset for Linux/Windows/IOS Platform and have a ball.

## Notes
The solution was built successfully on Windows 10 with:
- Command Prompt + Cmake + Ninja (remember to install Cmake and Ninja tools ). To build:
  1. cd pathtoclonedrepository
  2. mkdir build
  3. cd build
  4. cmake -G Ninja ..
  5. cmake --build .
  
- Visual Studio 2017 Community (version 15.9.3)  to built every example with both MSVC (version 19.16.27024.1) and Mingw64 ( version 8.1.0 ) toolset. To build:
  1. Open a cmake project try File->Open Project->Cmake; 
  2. Cmake->Build All
- Qt Creator 4.7.2 1. To build:
  1. Open File or Project
  2. Build->Build All
