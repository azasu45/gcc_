cmake_minimum_required(VERSION 3.25)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

project(App VERSION 0.1.0 LANGUAGES C CXX)

option(BUILD_SHARED_LIBS "Build using shared libraries" ON)

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY "${PROJECT_BINARY_DIR}")
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY "${PROJECT_BINARY_DIR}")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${PROJECT_BINARY_DIR}")

option(BUILD_SHARED_LIBS "Build using shared libraries" ON)

enable_testing()

include(CTest)

add_library(tutorial_compiler_flags INTERFACE)

target_compile_features(tutorial_compiler_flags INTERFACE cxx_std_11)

add_subdirectory(lib)

add_executable(App src/main.cpp)

target_link_libraries(App PUBLIC Node tutorial_compiler_flags)

target_include_directories(App PUBLIC "${PROJECT_BINARY_DIR}")

install(TARGETS App RUNTIME DESTINATION bin)