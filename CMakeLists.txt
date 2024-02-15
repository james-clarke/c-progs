cmake_minimum_required(VERSION 3.27)
project(CPrograms C)

set(CMAKE_C_STANDARD 11)

include_directories(.)
include_directories(chapter-1)
include_directories(chapter-2)
include_directories(chapter-3)

add_executable(CPrograms
        chapter-1/arrays.c
        chapter-1/char-count.c
        chapter-1/ctof.c
        chapter-1/hello.c
        chapter-1/input-output.c
        chapter-1/longest-line.c
        chapter-1/power-function.c
        chapter-1/word-count.c
        chapter-2/leap-year.c
        chapter-2/stoint.c
        chapter-3/binary-search.c
        chapter-3/count.c
        chapter-3/shell-sort.c)
