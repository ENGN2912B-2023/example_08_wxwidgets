//  Copyright (c) 2022-2023 Daniel Moreno. All rights reserved.
//

#include "MainWindow.hpp"

namespace course
{
  MainWindow::MainWindow() :
    wxFrame{ nullptr, wxID_ANY, "Hello World!" }
  {
    // Show the frame
    Centre();
    Show();
  }
}