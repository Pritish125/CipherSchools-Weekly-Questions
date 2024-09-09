#include <iostream>

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int* ptr = arr;

    for (int i = 0; i < 5; i++) {
        std::cout << *(ptr + i) << " ";
    }

    std::cout << std::endl;
    return 0;
}
