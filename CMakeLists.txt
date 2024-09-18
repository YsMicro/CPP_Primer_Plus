cmake_minimum_required(VERSION 3.29)
project(CPP_Primer_Plus)

set(CMAKE_CXX_STANDARD 20)

add_executable(CPP_Primer_Plus main.cpp
        head.h
        src/chapter_12/chapter_12_main.cpp
        src/chapter_12/chapter_12_head.h
        src/chapter_12/string_bad.h
        src/chapter_12/string_bad.cpp
        src/chapter_12/vegNews.cpp
        src/chapter_10/chapter_10_main.cpp
        src/chapter_10/chapter_10_head.h)
