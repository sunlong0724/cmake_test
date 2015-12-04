cmake_minimum_required(VERSION 3.4)
set(LIB_SRC hello.c)
add_library(libhello SHARED  ${LIB_SRC})
#set_target_properties(libhello PROPERTIES OUTPUT_NAME "hello")

SET_TARGET_PROPERTIES (libhello PROPERTIES DEFINE_SYMBOL  "EXPORT_HELLO_DLL") 

message( --		${CMAKE_SOURCE_DIR}/output)
install(TARGETS libhello DESTINATION ${CMAKE_SOURCE_DIR}/output)