cmake_minimum_required(VERSION 3.10)

project(Factorial)

set(SOURCES src/main.cpp src/factorial.cpp)
set(HEADERS src/factorial.h)
add_executable(FACTORIAL ${SOURCES} ${HEADERS})
#set_property(TARGET Factorial PROPERTY CXX_STANDARD 17)
#set_property(TARGET Factorial PROPERTY CXX_STANDARD_REQUIRED ON)
