#TEST LIBRARY

create_test_sourcelist(
   TESTS test_drvier.cxx
   Test_Node.cpp 
   Test_ListNode_InsertFirst.cpp
   Test_ListNode_GetElements.cpp
)

add_executable(CommonCxxTests ${TESTS})

# remove the test driver source file
set (TestsToRun ${TESTS})
remove (TestsToRun test_drvier.cxx)

target_link_libraries(CommonCxxTests PUBLIC Node)

target_include_directories(CommonCxxTests PUBLIC "${PROJECT_BINARY_DIR}")

foreach (test ${TestsToRun})

   get_filename_component (TName ${test} NAME_WE)
   add_test (NAME ${TName} COMMAND CommonCxxTests ${TName})
   
endforeach ()