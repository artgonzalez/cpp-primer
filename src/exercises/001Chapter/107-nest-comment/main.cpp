/*
Exercise 1.7: Compile a program that has incorrectly nested comments.
*/
#include<iostream>
// /*
// * everything inside a single-line comment is ignored
// * including nested comment pairs
// */

int main()
{
    std::cout<<"Nested Comments";

    return 0;
}