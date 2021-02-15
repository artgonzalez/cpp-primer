#include <bitset>
#include <iostream>

using std::bitset; using std::cout;

int main()
{
    unsigned char bits = 10;
    unsigned char bits1 = 100;
    cout<<"bits: "<<bitset<8>(bits)<<"\n";
    cout<<"bits: "<<bitset<8>(bits1)<<"\n";

    unsigned char result = bits & bits1;
    cout<<"result bits AND bits1 "<<bitset<8>(result)<<"\n";

    result = bits | bits1;
    cout<<"result bits OR bits1 "<<bitset<8>(result)<<"\n";

    result = bits ^ bits1;
    cout<<"result bits XOR bits1 "<<bitset<8>(result)<<"\n";

    //change 1 bit
    result |= 1 << 4;
    cout<<"result  "<<bitset<8>(result)<<"\n";
    return 0;
}