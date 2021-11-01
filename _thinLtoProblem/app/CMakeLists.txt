cmake_minimum_required(VERSION 3.6)

project(app)

set(LINK_FLAGS -O0)
set(C_FLAGS ${LINK_FLAGS} -flto=thin)

file(GLOB src "*.cpp")
add_executable(app ${src})

target_compile_options(app PUBLIC ${C_FLAGS})
target_link_options(app PUBLIC ${LINK_FLAGS})

add_subdirectory("../engine" engine)
target_link_libraries(app PUBLIC engine)
