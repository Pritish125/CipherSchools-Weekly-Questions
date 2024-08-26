#include <iostream>

using namespace std;

int main() {
    int a, b;
    cout << "Enter first integer: ";
    cin >> a;
    cout << "Enter second integer: ";
    cin >> b;

    cout << "Addition: " << a + b << endl;
    cout << "Subtraction: " << a - b << endl;
    cout << "Multiplication: " << a * b << endl;

    if (b != 0) {
        cout << "Division: " << static_cast<double>(a) / b << endl;
        cout << "Modulus: " << a % b << endl;
    } else {
        cout << "Division: Undefined (division by zero)" << endl;
        cout << "Modulus: Undefined (division by zero)" << endl;
    }

    return 0;
}
