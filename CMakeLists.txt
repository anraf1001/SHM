cmake_minimum_required(VERSION 3.10)
enable_testing()

project(shm)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_subdirectory(extern/googletest)

set(FLAGS -Wall -Wextra -Werror -Wconversion -pedantic)

set(SOURCES
    cargo.cpp
    ship.cpp)

set(TEST_SOURCES
    ship-ut.cpp)

add_library(${PROJECT_NAME}-lib STATIC ${SOURCES})

add_executable(${PROJECT_NAME} main.cpp)
target_compile_options(${PROJECT_NAME} PRIVATE ${FLAGS})
target_link_libraries(${PROJECT_NAME} ${PROJECT_NAME}-lib)

add_executable(${PROJECT_NAME}-ut main-ut.cpp ${TEST_SOURCES})
target_compile_options(${PROJECT_NAME}-ut PRIVATE ${FLAGS})
target_link_libraries(${PROJECT_NAME}-ut PUBLIC ${PROJECT_NAME}-lib gtest gmock)

add_test(NAME Test COMMAND ${PROJECT_NAME}-ut)
