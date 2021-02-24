#include "window_manager.h"

int main()
{
    WindowManager manager;
    manager.addScreen(Screen(5, 5));
    manager.clear(0);

    return 0;
}