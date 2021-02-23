#include <iostream>
#include "function_pointers.h"

using std::cout;

int main()
{
   void (*p_fun)(int num) = display;
   p_fun(50);
   return 0;
}