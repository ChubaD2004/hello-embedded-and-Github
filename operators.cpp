#include <iostream>

int main() {

    // ----------------------------------------------------------------

    int a = 15;
    int b = 4;

    std::cout << "int a = " << a << std::endl;
    std::cout << "int b = " << b << std::endl;

    std::cout << "arithmetic operations" << std::endl;

    std::cout << "a + b = " << a + b << std::endl;
    std::cout << "a - b = " << a - b << std::endl;
    std::cout << "a * b = " << a * b << std::endl;
    std::cout << "a / b = " << a / b << std::endl;
    std::cout << "a % b = " << a % b << std::endl;
    
    std::cout << "comparison operations" << std::endl;
    std::cout << "a == b = " << (a == b) << std::endl;
    std::cout << "a != b = " << (a != b) << std::endl;
    std::cout << "a < b = " << (a < b) << std::endl;
    std::cout << "a > b = " << (a > b) << std::endl;
    std::cout << "a <= b = " << (a <= b) << std::endl;
    std::cout << "a >= b = " << (a >= b) << std::endl;

    // ----------------------------------------------------------------
    
    return 0;
}