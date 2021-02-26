#include<iostream>
#include<memory>

void use_shared_pointer(std::shared_ptr<int> num);
void use_shared_pointer_ref(std::shared_ptr<int>& num);
std::shared_ptr<int> get_shared_pointer();
