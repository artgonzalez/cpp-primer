#ifndef WINDOW_MANAGER_H
#define WINDOW_MANAGER_H
#include<vector>
#include "screen.h"

class WindowManager
{
public:
    using ScreenIndex = std::vector<Screen>::size_type;    
    void clear(ScreenIndex screen_index);
private:
    std::vector<Screen>screens{Screen(24, 80, ' ')};
};

#endif