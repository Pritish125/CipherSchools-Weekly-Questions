#include <iostream>

int main() {
    int arr[] = {2, 4, 6, 7, 8};
    int target = 6;
    int index = -1;

    for (int i = 0; i < 5; i++) {
        if (arr[i] == target) {
            index = i + 1; // 1-based indexing
            break;
        }
    }

    std::cout << index << std::endl;

    return 0;
}
