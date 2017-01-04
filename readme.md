#HomestuckHashmap
##Intro
HH is a program designed to quickly hash-map words according to Dave Strider's original hash function (with later ones soon to come)

##Building
While not strictly required, this project has been created with the CMake toolchain. To use this system (Linux and POSIX-like systems) follow these instructions:

    mkdir build
    cd build
    cmake ..
    make

If you do not have CMake, make sure you have a C++11 compiler, and run it with no build flags. Assuming you have a correct installation of the stdc++ libraries, it should build fine.

Example:

    x86_64-w64-mingw32-c++ ./main.cpp -o build/homestuckhashmap.exe

##Running
In order to run this program, open a command prompt or terminal in the directory used to build it (or wherever you extracted the binary archive) and type the following:

    ./homestuckhashmap

(or on Windows:)

    ./homestuckhashmap.exe
