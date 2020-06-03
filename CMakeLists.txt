cmake_minimum_required(VERSION 3.10)

# cmake compiler set
set(CMAKE_C++_COMPILER    "/usr/bin/g++-7")
set(CMAKE_in_COMPILER     "/usr/bin/g++-7")

# specify the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# project
project(ML_IN_CPP VERSION 1.0.0 LANGUAGES CXX)

# external dependencies
include_directories("external")


add_executable(linear_model.out
    ml/LinearRegressionModel.cpp
)
