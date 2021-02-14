#include<iostream>

int main()
{
    int num = 1024 /*int*/, *ptr_num = &num /*ptr to int */, &ref_num = num/*ref to int*/, num1/*int*/;

    //pointer to pointer
    int num2 = 512;
    ptr_num = &num2;//pointer to num2
    int **ptr_ptr_num = &ptr_num;//pointer to ptr_num to num2
    
    std::cout<<"num2 "<<num2<<"\n";
    std::cout<<"*ptr_num "<<*ptr_num<<"\n";
    std::cout<<"*ptr_ptr_num "<<**ptr_ptr_num<<"\n";

    //reference to pointer
    int *&ref_ptr = ptr_num;//reference to pointer [pointer]
    ref_ptr = &num2;//reassign 

    return 0;
}