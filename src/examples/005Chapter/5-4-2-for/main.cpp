#include <iostream>
#include <string>

using std::cout;  using std::string;

int main()
{   
    string name = "Joe";

    //for(init; condition; evaluation)
    /*
    init can have more than 1 but they must be same data type; can be omitted
    condition can be more than one too; can be omitted
    evaluation can be omitted
    */
    for(decltype(name.size()) i =0; i < name.size(); ++i)
    {
        cout<<name[i]<<'\n';
    }

    return 0;
}