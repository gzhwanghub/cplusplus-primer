cmake_minimum_required(VERSION 3.16)
project(cplusplus_primer)

set(CMAKE_CXX_STANDARD 14)
file (GLOB_RECURSE files *.cpp)
foreach (file ${files})
    string(REGEX REPLACE ".+/(.+)\\..*" "\\1" exe ${file})
    add_executable (${exe} ${file})
    message (\ \ \ \ --\ src/${exe}.cpp\ will\ be\ compiled\ to\ bin/${exe})
endforeach ()

add_executable(cplusplus_primer main.cpp)
