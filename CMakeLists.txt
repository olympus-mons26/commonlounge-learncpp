cmake_minimum_required(VERSION 4.3)
project(commonlounge_learncpp)

set(CMAKE_CXX_STANDARD 26)

add_executable(helloworld helloworld.cpp)
add_executable(datatypes-operators datatypes-operators.cpp)
add_executable(cpp-strings-basics cpp-strings-basics.cpp
        user-inputs-variables.cpp
        conditionals.cpp)
add_executable(user-inputs-variables user-inputs-variables.cpp)
add_executable(conditionals conditionals.cpp)
add_executable(arrays-loops arrays-loops.cpp)
add_executable(exercise-hotter-colder exercise-hotter-colder.cpp)
