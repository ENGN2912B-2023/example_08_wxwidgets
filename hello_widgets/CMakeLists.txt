
add_executable(hello_widgets 
  App.hpp
  App.cpp
  MainWindow.hpp
  MainWindow.cpp
)
target_link_libraries(hello_widgets wx::core)

