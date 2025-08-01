#include <iostream>
#include <limits>
#include <iomanip>

int main() {

    // ----------------------------------------------------------------

    std::cout << "Block 1" << std::endl;

    std::cout << "int = " << sizeof(int) << std::endl;
    std::cout << "min int = " << std::numeric_limits<int>::min() << std::endl;
    std::cout << "max int = " << std::numeric_limits<int>::max() << std::endl;
    std::cout << "unsigned min int = " << std::numeric_limits<unsigned int>::min() << std::endl;
    std::cout << "char = " << sizeof(char) << std::endl;
    std::cout << "short = " << sizeof(short) << std::endl;
    std::cout << "long long = " << sizeof(long long) << std::endl;
    std::cout << "float = " << sizeof(float) << std::endl;
    std::cout << "double = " << sizeof(double) << std::endl;

    // ----------------------------------------------------------------

    std::cout << "Block 2" << std::endl;

    unsigned int positive_value = 10;
    std::cout << "positive_value = " << positive_value << std::endl;
    positive_value = -1;
    std::cout << "positive_value = " << positive_value << std::endl;

    // ----------------------------------------------------------------

    std::cout << "Block 3" << std::endl;

    float a = 0.1;
    float b = 0.2;
    
    std::cout << std::setprecision(20) << "a + b = " << a + b << std::endl;

    if (a + b == 0.3) {
        std::cout << "True" << std::endl;
    } else {
        std::cout << "False" << std::endl;
    }

    // ----------------------------------------------------------------

    std::cout << "Block 4" << std::endl;

    int mask = 5;
    std::cout << "mask = " << mask << std::endl;

    mask = mask << 2;
    std::cout << "mask = " << mask  << std::endl;

    
    return 0;
}