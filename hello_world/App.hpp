//  Copyright (c) 2022-2023 Daniel Moreno. All rights reserved.
//

#pragma once

#include <wx/app.h>

#include "MainWindow.hpp"

namespace course
{
  class App : public wxApp
  {
    MainWindow* window_;
  public:
    virtual bool OnInit() override;
  };

  wxDECLARE_APP(App); //declares: wxGetApp()
}