add_library(lib_list SHARED List.h)

set_target_properties(lib_list PROPERTIES LINKER_LANGUAGE CXX)

target_include_directories(lib_list PUBLIC ${CMAKE_CURRENT_LIST_DIR})