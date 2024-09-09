#include <iostream>

int main() {
    int num = 10;
    int* ptr = &num;

    std::cout << "Value of the variable: " << num << std::endl;
    std::cout << "Value using the pointer: " << *ptr << std::endl;

    return 0;
}
