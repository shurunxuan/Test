project(TestLib)

set(Boost_USE_STATIC_LIBS OFF)
set(Boost_USE_MULTITHREADED ON)
set(Boost_USE_STATIC_RUNTIME OFF)
find_package(Boost REQUIRED)
include_directories(${Boost_INCLUDE_DIRS})

find_package(wxWidgets REQUIRED)
include(${wxWidgets_USE_FILE})

add_compile_definitions(TEST_EXPORTS)

add_library(TestLib SHARED TestLib.h TestLib.cpp)

target_link_libraries(TestLib ${Boost_LIBRARIES})
target_link_libraries(TestLib ${wxWidgets_LIBRARIES})