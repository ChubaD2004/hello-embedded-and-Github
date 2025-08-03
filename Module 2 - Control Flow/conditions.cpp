#include <iostream>

int main() {

    // ----------------------------------------------------------------

    int number;
    
    std::cout << "Enter one integer: ";
    std::cin >> number;

    if (number > 0) {
        std::cout << "The number is positive." << std::endl;
    } else if (number < 0) {
        std::cout << "The number is negative." << std::endl;
    } else {
        std::cout << "The number is zero." << std::endl;
    }
    
    if (number % 2 == 0) {
        std::cout << "The number is even." << std::endl;
    } else {
        std::cout << "The number is odd." << std::endl;
    } 

    // ----------------------------------------------------------------
    
    return 0;
}