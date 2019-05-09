project(Test)

add_executable(Test main.cpp Compiler.cpp)

target_link_libraries(Test TestLib)