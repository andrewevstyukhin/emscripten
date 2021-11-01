
file(GLOB src "*.cpp")
add_library(engine STATIC ${src})

target_compile_options(engine PUBLIC ${C_FLAGS})
