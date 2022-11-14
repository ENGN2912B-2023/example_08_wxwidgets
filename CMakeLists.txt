cmake_minimum_required(VERSION 3.20)

project(ui_example)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

if(MSVC)
  add_compile_options(/permissive-)
endif()

set_property(GLOBAL PROPERTY USE_FOLDERS ON)

add_subdirectory(3rd-party)

add_subdirectory(hello_world)
add_subdirectory(hello_menu)
add_subdirectory(hello_widgets)
add_subdirectory(hello_gridSizer)
add_subdirectory(hello_flexGridSizer)
