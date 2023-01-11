
set(CMAKE_C_COMPILER /usr/bin/gcc)
set(CMAKE_CXX_COMPILER /usr/bin/g++)
project(hello)
set(src_list ./hello.cpp)
message(STATUS "this is binary dir" ${HELLO_BINARY_DIR})
message(STATUS "this is source dir" ${hello_source_dir})
add_executable(hello ${src_list} )