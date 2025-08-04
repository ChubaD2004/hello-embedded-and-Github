#include <iostream>

void printMenu() {
    std::cout << "1. Addition\n2. Subtraction\n3. Division\n4. Multiplication" << std::endl;
    std::cout << "What operation should be performed? (enter the operation number): ";
}

int add(int x, int y) {

    int result = x + y;
    return result; 
}
    
int subtract(int x, int y) {
    int result = x - y;
    return result; 
}

int multiply(int x, int y) {
    int result = x * y;
    return result; 
}

float divide(int x, int y) {
    float result = static_cast<float>(x) / y;
    return result; 
}

int main() {

    // ----------------------------------------------------------------
    int x, y, operation;
    char next;

    do
    {
        std::cout << "Enter the first number: ";
        std::cin >> x;
        std::cout << "Enter the second  number: ";
        std::cin >> y;

        printMenu();
        std::cin >> operation;
        

        switch (operation)
        {
        case 1:
            std::cout << "Result: " << x << " + " << y << " = " << add(x, y) << std::endl;
            break;
        case 2:
            std::cout << "Result: " << x << " - " << y << " = " << subtract(x, y) << std::endl;
            break;
        case 3:
            if (y == 0)
            {
                std::cout << "Error! You cannot divide by zero." << std::endl;
                break;
            } else {
                std::cout << "Result: " << x << " / " << y << " = " << divide(x, y) << std::endl;
                break;
            }            
        case 4:
            std::cout << "Result: " << x << " * " << y << " = " << multiply(x, y) << std::endl;
            break;
        default:
            std::cout << "Error! Such an operation does not exist." << std::endl;
            break;
        }


        std::cout << "Do you wish to continue? (y/n): ";
        std::cin >> next;
              
    } while (next == 'y');

    // ----------------------------------------------------------------
    
    return 0;
}