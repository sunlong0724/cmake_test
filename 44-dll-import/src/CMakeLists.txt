cmake_minimum_required(VERSION 3.4)




#include_directories(${CMAKE_SOURCE_DIR}/libhello)
set(APP_SRC main.c)
add_executable(hello ${APP_SRC} hello.h)

message(status  -- ${CMAKE_SOURCE_DIR}/output/libhello.lib)
ADD_LIBRARY(libhello UNKNOWN  IMPORTED)
SET_PROPERTY(TARGET libhello PROPERTY IMPORTED_LOCATION ${CMAKE_SOURCE_DIR}/output/libhello.lib)


target_link_libraries(hello libhello)
install(TARGETS hello DESTINATION ${CMAKE_SOURCE_DIR}/output)