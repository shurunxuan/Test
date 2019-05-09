project(Test)

find_package(wxWidgets REQUIRED)
include(${wxWidgets_USE_FILE})

add_executable(Test main.cpp Compiler.cpp MyApp.cpp MyApp.h)

target_link_libraries(Test ${wxWidgets_LIBRARIES})
target_link_libraries(Test TestLib)