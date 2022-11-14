//  Copyright (c) 2022-2023 Daniel Moreno. All rights reserved.
//

#include "MainWindow.hpp"

namespace course
{
  MainWindow::MainWindow() :
    wxFrame{ nullptr, wxID_ANY, "Hello GridSizer!" }
  {
    // Create a menu bar
    wxMenu* menuFile = new wxMenu;
    menuFile->Append(wxID_EXIT);

    wxMenu* menuHelp = new wxMenu;
    menuHelp->Append(wxID_ABOUT);

    wxMenuBar* menuBar = new wxMenuBar;
    menuBar->Append(menuFile, "&File");
    menuBar->Append(menuHelp, "&Help");

    SetMenuBar(menuBar);

    // Bind menu events to event handlers
    Bind(wxEVT_MENU, &MainWindow::onAbout, this, wxID_ABOUT);
    Bind(wxEVT_MENU, &MainWindow::onExit, this, wxID_EXIT);

    // Create a status bar
    CreateStatusBar();
    SetStatusText("GridSizer Example!");

    // Add widgets
    wxGridSizer* sizer{ new wxGridSizer{3, 3, 4, 4} };
    for (int i = 0; i < 9; ++i)
    {
      wxButton* button{ new wxButton{ this, -1, std::to_string(i) } };
      sizer->Add(button);
    }
    SetSizer(sizer);

    // Show the frame
    Centre();
    Show();
  }

  void MainWindow::onExit(wxCommandEvent& event)
  {
    Close();
  }

  void MainWindow::onAbout(wxCommandEvent& event)
  {
    wxMessageBox(
      "Hello GridSizer example about dialog.",
      "About `Hello GridSizer`");
  }
}