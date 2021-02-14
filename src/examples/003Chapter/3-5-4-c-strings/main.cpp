#include<iostream>
#include<cstring>

using std::cout;

int main()
{
    char name[] = {'J', 'o', 'e', '\0'};

    cout<<strlen(name)<<"\n";

    char name1[] = {'j', 'o', 'e', '\0'};

    cout<<strcmp(name, name1)<<"\n";//> 0 is true

    char name2[4];
    strcpy(name2, name);
    cout<<name2<<"\n";

    return 0;
}