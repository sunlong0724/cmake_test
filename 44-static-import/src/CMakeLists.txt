
message(status, ${CMAKE_SOURCE_DIR}/src/hello.lib)
ADD_LIBRARY(libhello STATIC IMPORTED)
SET_PROPERTY(TARGET libhello PROPERTY IMPORTED_LOCATION ${CMAKE_SOURCE_DIR}/src/hello.lib)



include_directories(${PROJECT_SOURCE_DIR}/libhello)
set(APP_SRC main.c)
add_executable(hello ${APP_SRC})
target_link_libraries(hello libhello)
