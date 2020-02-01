cmake_minimum_required(VERSION 3.14)

project(Test DESCRIPTION "Testing Program" LANGUAGES CXX)

set(SRC "main.cpp")

set(EXE_NAME "unit-test")

add_executable("${EXE_NAME}" "${SRC}")

