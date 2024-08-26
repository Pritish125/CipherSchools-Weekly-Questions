#include <iostream>

using namespace std;

int main() {
    int N;
    cout << "Enter a number: ";
    cin >> N;

    cout << "Multiplication table of " << N << ":\n";
    for (int i = 1; i <= 10; ++i) {
        cout << N << " x " << i << " = " << N * i << endl;
    }

    return 0;
}
