add_library(NodeLib Node.cpp)

target_include_directories(NodeLib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

add_executable(testLib test/main.cpp)

target_link_libraries(testLib PUBLIC NodeLib)

add_test(NAME testLib COMMAND $<TARGET_FILE:testLib>)