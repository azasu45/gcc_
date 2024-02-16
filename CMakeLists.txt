cmake_minimum_required(VERSION 3.25)

set(CMAKE_CXX_STANDARD 11)

set(CMAKE_CXX_STANDARD_REQUIRED True)

project(App VERSION 0.1.0 LANGUAGES C CXX)

add_subdirectory(lib)

enable_testing()

include(CTest)
include(CPack)
add_executable(App src/main.cpp)

target_link_libraries(App PUBLIC NodeLib)

target_include_directories(App PUBLIC "${PROJECT_BINARY_DIR}")
