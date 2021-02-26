#include<iostream>
#include<memory>

std::unique_ptr<int> get_unique_pointer(int num);
void use_unique_pointer(std::unique_ptr<int> num);
void use_unique_pointer_ref(std::unique_ptr<int>& num);