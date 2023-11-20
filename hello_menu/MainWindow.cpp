//  Copyright (c) 2022-2023 Daniel Moreno. All rights reserved.
//

#include "MainWindow.hpp"

namespace course
{
  enum EventIds
  {
    ID_Hello = 1
  };

  MainWindow::MainWindow() :
    wxFrame{ nullptr, wxID_ANY, "Hello Menu!" }
  {
    // Create a menu bar
    wxMenu* menuFile = new wxMenu;
    menuFile->Append(ID_Hello, "&Hello...\tCtrl-H",
      "Help string shown in status bar for this menu item");
    menuFile->AppendSeparator();
    menuFile->Append(wxID_EXIT);

    wxMenu* menuHelp = new wxMenu;
    menuHelp->Append(wxID_ABOUT);

    wxMenuBar* menuBar = new wxMenuBar;
    menuBar->Append(menuFile, "&File");
    menuBar->Append(menuHelp, "&Help");

    SetMenuBar(menuBar);

    // Bind menu events to event handlers
    Bind(wxEVT_MENU, &MainWindow::onHello, this, ID_Hello);
    Bind(wxEVT_MENU, &MainWindow::onAbout, this, wxID_ABOUT);
    Bind(wxEVT_MENU, &MainWindow::onExit, this, wxID_EXIT);

    // Create a status bar
    CreateStatusBar();
    SetStatusText("Welcome to wxWidgets!");

    // Show the frame
    Centre();
    Show();
  }

  void MainWindow::onHello(wxCommandEvent& event)
  {
    wxLogMessage("Hello menu from wxWidgets!");
  }

  void MainWindow::onExit(wxCommandEvent& event)
  {
    Close();
  }

  void MainWindow::onAbout(wxCommandEvent& event)
  {
    wxMessageBox(
      "Hello menu example about dialog.",
      "About `Hello menu`");
  }
}