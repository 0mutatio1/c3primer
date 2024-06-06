
#pragma once

#include <vector>
#include "Screen .h"

class Window_mgr {
public:
    // location ID for each screen on the window
    using ScreenIndex = std::vector<Screen>::size_type;
    // reset the Screen at the given position to all blanks
    void clear(ScreenIndex);
    ScreenIndex addScreen(const Screen&);

private:
    std::vector<Screen> screens{ Screen(24, 80, ' ') };
};
