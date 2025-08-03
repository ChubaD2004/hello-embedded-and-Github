#include <iostream>

int main() {

    // ----------------------------------------------------------------

    std::cout << "Block 1" << std::endl;

    for (int i = 1; i <= 10; i++)
    {
        std::cout << i << std::endl;

    }
    
    // ----------------------------------------------------------------

    std::cout << "Block 2" << std::endl;

    int number = 1;
    while (number <= 10)
    {
        std::cout << number << std::endl;
        number++;
    }
    
    // ----------------------------------------------------------------

    std::cout << "Block 3" << std::endl;

    int x;
    int y;
    int operation;
    char next;

    do
    {
        std::cout << "Enter the first number: ";
        std::cin >> x;
        std::cout << "Enter the second  number: ";
        std::cin >> y;
        std::cout << "1. Addition\n2. Subtraction\n3. Division\n4. Multiplication" << std::endl;

        std::cout << "What operation should be performed? (enter the operation number): ";
        std::cin >> operation;

        if (operation == 1) {
            std::cout << "Result: " << x << " + " << y << " = " << x + y << std::endl;
        } else if (operation == 2) {
            std::cout << "Result: " << x << " - " << y << " = " << x - y << std::endl;
        } else if (operation == 3) {
            std::cout << "Result: " << x << " / " << y << " = " << x / y << std::endl;
        } else if (operation == 4) {
            std::cout << "Result: " << x << " * " << y << " = " << x * y << std::endl;
        } else {
            std::cout << "Error! Such an operation does not exist." << std::endl;
        }

        std::cout << "Do you wish to continue? (y/n): ";
        std::cin >> next;
              
    } while (next == 'y');
    

    // ----------------------------------------------------------------
    
    return 0;
}