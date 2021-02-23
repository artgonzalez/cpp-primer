#include "window_manager.h"

using std::string;

void WindowManager::clear(ScreenIndex i)
{
    Screen& screen = screens[i];
    screen.contents = string(screen.height * screen.width, ' ');
}