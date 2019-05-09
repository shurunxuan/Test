project(TestLib)

# Find includes in corresponding build directories
set(CMAKE_INCLUDE_CURRENT_DIR ON)
# Instruct CMake to run moc automatically when needed
set(CMAKE_AUTOMOC ON)
# Create code from a list of Qt designer ui files
set(CMAKE_AUTOUIC ON)

set(Boost_USE_STATIC_LIBS OFF)
set(Boost_USE_MULTITHREADED ON)
set(Boost_USE_STATIC_RUNTIME OFF)
find_package(Boost REQUIRED)
include_directories(${Boost_INCLUDE_DIRS})

find_package(Qt5Widgets REQUIRED)

add_compile_definitions(TEST_EXPORTS)

add_library(TestLib SHARED TestLib.h TestLib.cpp)

target_link_libraries(TestLib ${Boost_LIBRARIES})
target_link_libraries(TestLib Qt5::Widgets)