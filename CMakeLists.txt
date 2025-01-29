cmake_minimum_required(VERSION 3.30)
project(encodeInput C)

set(CMAKE_C_STANDARD 11)

include_directories(include)

add_executable(encodeInput src/main.c
        src/file_io.c
        src/assembly.c
        src/srecord.c
        include/srecord.h)
