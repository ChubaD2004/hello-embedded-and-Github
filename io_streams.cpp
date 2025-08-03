#include <iostream>
#include <string>

int main() {

    // ----------------------------------------------------------------

    std::string name;
    int age;
    
    std::cout << "Hello! What's you'r name?" << std::endl;
    std::cout << "Name: ";
    std::cin >> name;

    std::cout << "Enter your age: ";
    std::cin >> age;

    std::cout << "Nice to meet you, " << name << "(" << age << " years)" << std::endl;


    // ----------------------------------------------------------------
    
    return 0;
}