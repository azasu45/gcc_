add_library(Node INTERFACE ListNode.cpp)

target_include_directories(Node INTERFACE ${CMAKE_CURRENT_SOURCE_DIR})

add_subdirectory(tests)