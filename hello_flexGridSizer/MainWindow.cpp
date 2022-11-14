//  Copyright (c) 2022-2023 Daniel Moreno. All rights reserved.
//

#include "MainWindow.hpp"

namespace course
{
  MainWindow::MainWindow() :
    wxFrame{ nullptr, wxID_ANY, "Hello FlexGridSizer!" }
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
    SetStatusText("FlexGridSizer Example!");

    // Add widgets
    wxFlexGridSizer* fgs = new wxFlexGridSizer(3, 2, 9, 25);

    wxStaticText* thetitle = new wxStaticText(this, -1, "Title");
    wxStaticText* author = new wxStaticText(this, -1, "Author");
    wxStaticText* review = new wxStaticText(this, -1, "Review");

    wxTextCtrl* tc1 = new wxTextCtrl(this, -1);
    wxTextCtrl* tc2 = new wxTextCtrl(this, -1);
    wxTextCtrl* tc3 = new wxTextCtrl(this, -1, "",
      wxPoint(-1, -1), wxSize(-1, -1), wxTE_MULTILINE);

    fgs->Add(thetitle);
    fgs->Add(tc1, 1, wxEXPAND);
    fgs->Add(author);
    fgs->Add(tc2, 1, wxEXPAND);
    fgs->Add(review, 1, wxEXPAND);
    fgs->Add(tc3, 1, wxEXPAND);

    fgs->AddGrowableRow(2, 1);
    fgs->AddGrowableCol(1, 1);

    SetSizer(fgs);

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
      "Hello FlexGridSizer example about dialog.",
      "About `Hello FlexGridSizer`");
  }
}