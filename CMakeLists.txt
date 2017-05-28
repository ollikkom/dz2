cmake_minimum_required(VERSION 3.6)
project(dz2)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Product.cpp Product.h Shop.cpp Shop.h Fruit.cpp Fruit.h Meat.cpp Meat.h Milk.cpp Milk.h)
add_executable(dz2 ${SOURCE_FILES})