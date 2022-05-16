#include<iostream>


using namespace std;

int main(void)
{
    auto value = 5;

    std::cout << value++ << std::endl; // 5
    std::cout << value << std::endl; // 6
    std::cout << value-- << std::endl; // 6
    std::cout << value << std::endl; // 5
    std::cout << ++value << std::endl; //6
    std::cout << value << std::endl; //6
    std::cout << --value << std::endl; //5
    std::cout << value << std::endl; //5

    std::cout << std::boolalpha;
    return 0;
}