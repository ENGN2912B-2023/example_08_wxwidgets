//  Copyright (c) 2022-2023 Daniel Moreno. All rights reserved.
//

#pragma once

#include <wx/wx.h>

namespace course
{
  class MainWindow : public wxFrame
  {
  public:
    MainWindow();

  private:
    // Menu event handlers
    void onHello(wxCommandEvent& event);
    void onExit(wxCommandEvent& event);
    void onAbout(wxCommandEvent& event);
    // Button event handler
    void onButton(wxCommandEvent& event);
  };
}

