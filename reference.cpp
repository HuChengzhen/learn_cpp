#include<iostream>

int main()
{
    int num = 0;
    int & num_ref = num;

    std::cout << num << std::endl;

    num_ref = 10;

    std::cout << num << std::endl;

    return 0;
}