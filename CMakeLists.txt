cmake_minimum_required(VERSION 3.0)

project("10print" C)
add_compile_options(-march=native -O2 -g2 -ggdb)
add_executable(10print 10print.c)
