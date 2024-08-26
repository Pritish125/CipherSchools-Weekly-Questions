#include <iostream>

using namespace std;

int main() {
    int n, sum = 0;
    cout << "n: ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
        sum += arr[i];
    }
    cout << "Sum of the array: " << sum << endl;
    return 0;
}
