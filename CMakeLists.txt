cmake_minimum_required(VERSION 3.10)

project(shm)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_subdirectory(extern/googletest)

# set(SOURCES)

# add_library(${PROJECT_NAME}-lib STATIC ${SOURCES})

add_executable(${PROJECT_NAME} main.cpp)

target_compile_options(${PROJECT_NAME} PRIVATE -Wall -Wextra -Werror -Wconversion -pedantic)
# target_link_libraries(${PROJECT_NAME} ${PROJECT_NAME}-lib)
