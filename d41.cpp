#include <iostream>
using namespace std;

int factorial(int n) {
    if (n == 0) return 1;
    return n * factorial(n - 1);
}

int fibonacci(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int sumOfDigits(int n) {
    if (n == 0) return 0;
    return n % 10 + sumOfDigits(n / 10);
}

int main() {
    int n;

    cout << "Enter a number for factorial: ";
    cin >> n;
    cout << "Factorial of " << n << " is " << factorial(n) << endl;

    cout << "Enter a number for Fibonacci: ";
    cin >> n;
    cout << "Fibonacci number at position " << n << " is " << fibonacci(n) << endl;

    cout << "Enter a positive integer to sum its digits: ";
    cin >> n;
    cout << "Sum of digits of " << n << " is " << sumOfDigits(n) << endl;

    return 0;
}
