
add_executable(hello_menu 
  App.hpp
  App.cpp
  MainWindow.hpp
  MainWindow.cpp
)
target_link_libraries(hello_menu wx::core)

