cmake_minimum_required(VERSION 3.24)
project(1400ProgrammingTasks)

set(CMAKE_CXX_STANDARD 17)

add_executable(1400ProgrammingTasks
        main.cpp

        include/log_duration.h
        include/test_framework.h
        include/tests.h
        include/chapter_1.h

        src/tests.cpp
        src/chapter_1.cpp)
