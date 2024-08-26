#include <iostream>

using namespace std;

int main() {
    int n, oddCount = 0, evenCount = 0;
    cout << "n: ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
        if (arr[i] % 2 == 0) {
            ++evenCount;
        } else {
            ++oddCount;
        }
    }
    cout << "Number of odd numbers: " << oddCount << endl;
    cout << "Number of even numbers: " << evenCount << endl;
    return 0;
}
