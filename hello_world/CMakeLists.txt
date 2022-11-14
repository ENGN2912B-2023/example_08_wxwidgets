
add_executable(hello_world 
  App.hpp
  App.cpp
  MainWindow.hpp
  MainWindow.cpp
)
target_link_libraries(hello_world wx::core)

