#include <iostream>

using namespace std;

int main() {
    int n, oddSum = 0, evenSum = 0;
    cout << "n: ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
        if (arr[i] % 2 == 0) {
            evenSum += arr[i];
        } else {
            oddSum += arr[i];
        }
    }
    cout << "Sum of odd numbers: " << oddSum << endl;
    cout << "Sum of even numbers: " << evenSum << endl;
    return 0;
}
