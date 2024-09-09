#include <iostream>

int main() {
    int num = 20;
    int* ptr = &num;
    int** ptrToPtr = &ptr;

    std::cout << "Value using the variable: " << num << std::endl;
    std::cout << "Value using the pointer: " << *ptr << std::endl;
    std::cout << "Value using the pointer to pointer: " << **ptrToPtr << std::endl;

    return 0;
}
