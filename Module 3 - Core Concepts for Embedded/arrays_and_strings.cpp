#include <iostream>

int main() {

    // ----------------------------------------------------------------

    std::cout << "Block 1" << std::endl;

    int numbers[5] = {10, 20, 30, 40, 50};
    int sum = 0;

    for (int i = 0; i < 5; i++)
    {
        std::cout << numbers[i] << std::endl;

    }
    
    for (int i = 0; i < 5; i++)
    {
        sum += numbers[i];
    }
    std::cout << "Result sum: " << sum << std::endl;
    // ----------------------------------------------------------------

    std::cout << "Block 2" << std::endl;

    char my_name[] = "Danylo";
    std::cout << "My name: " << my_name << std::endl;
    std::cout << "Size my_name[]: " << sizeof(my_name) << " bytes" << std::endl;

    // ----------------------------------------------------------------

    std::cout << "Block 3" << std::endl;

    char user_input[50];

    std::cout << "Input your message: ";
    std::cin >> user_input;

    std::cout << "Your message: " << user_input << std::endl;
    // ----------------------------------------------------------------
    
    return 0;
}