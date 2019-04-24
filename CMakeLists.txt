cmake_minimum_required(VERSION 3.14)

project(Test)

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

set(CMAKE_CXX_STANDARD 17)

add_executable(Test main.cpp)
target_link_libraries(Test ${Boost_LIBRARIES})
target_link_libraries(Test Qt5::Widgets)