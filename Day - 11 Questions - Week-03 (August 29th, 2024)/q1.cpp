#include <iostream>

int main() {
    int arr[] = {2, 4, 6, 7, 8};
    int target = 6;
    bool found = false;

    for (int i = 0; i < 5; i++) {
        if (arr[i] == target) {
            found = true;
            break;
        }
    }

    if (found) {
        std::cout << "YES" << std::endl;
    } else {
        std::cout << "NO" << std::endl;
    }

    return 0;
}
