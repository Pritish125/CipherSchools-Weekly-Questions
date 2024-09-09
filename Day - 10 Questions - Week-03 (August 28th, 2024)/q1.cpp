#include <iostream>

int findMax(const int arr[], int size) {
    int maxVal = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > maxVal) {
            maxVal = arr[i];
        }
    }
    return maxVal;
}

int main() {
    int arr1[] = {1, 5, 3, 9, 2};
    std::cout << findMax(arr1, 5) << std::endl;

    int arr2[] = {10, 20, 5, 25, 15};
    std::cout << findMax(arr2, 5) << std::endl;

    int arr3[] = {-3, -1, -7, -2};
    std::cout << findMax(arr3, 4) << std::endl;

    return 0;
}
