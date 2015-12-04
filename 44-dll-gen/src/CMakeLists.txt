cmake_minimum_required(VERSION 3.4)

include_directories(${CMAKE_SOURCE_DIR}/libhello)
set(APP_SRC main.c)
add_executable(hello ${APP_SRC})
target_link_libraries(hello libhello)

install(TARGETS hello DESTINATION ${CMAKE_SOURCE_DIR}/output)