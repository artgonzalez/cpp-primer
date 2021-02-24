#include "window_manager.h"

using std::string;

void WindowManager::clear(ScreenIndex i)
{
    Screen& screen = screens[i];
    screen.contents = string(screen.height * screen.width, ' ');
}

WindowManager::ScreenIndex WindowManager::addScreen(const Screen& screen) 
{
    screens.push_back(screen);
    return screens.size() -1 ;
}