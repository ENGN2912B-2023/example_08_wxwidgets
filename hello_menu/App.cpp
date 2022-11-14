//  Copyright (c) 2022-2023 Daniel Moreno. All rights reserved.
//

#include "App.hpp"

namespace course
{
  wxIMPLEMENT_APP_NO_MAIN(App);

  bool App::OnInit()
  {
    window_ = new MainWindow{};
    return true;
  }
}

int main(int argc, char* argv[])
{
  return wxEntry(argc, argv);
}
