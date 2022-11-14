
add_executable(hello_gridSizer 
  App.hpp
  App.cpp
  MainWindow.hpp
  MainWindow.cpp
)
target_link_libraries(hello_gridSizer wx::core)

