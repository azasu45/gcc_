cmake_minimum_required(VERSION 3.25.0)
project(app VERSION 0.1.0 LANGUAGES C CXX)

# configure_file( 
#     "${PROJECT_SOURCE_DIR}/cmake/config.h.in"
#     "${PROJECT_BINARY_DIR}/config.h")


# include(CTest)

# enable_testing()

# # add_subdirectory(lib)

add_executable(app main.cpp)

# set(CMAKE_CXX_STANDARD 11)
# set(CMAKE_CXX_STANDARD_REQUIRED True)
# set(CPACK_PROJECT_NAME ${PROJECT_NAME})
# set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
# include(CPack)
