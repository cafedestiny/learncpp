#include<iostream>


using namespace std;

int main(void)
{
    int a{6};
    int b{3};
    int c{8};
    int d{9};
    int e{3};
    int f{2};
    int g{5};
    
    int result = a + b * c - d/e - f + g; // 6 + 24 - 3 - 2 + 5 // 30 - 3 - 2 + 5 // 27 - 2 + 5 // 25 + 5 // 30
    std::cout << "result: " << result << std::endl; 
    return 0;
}