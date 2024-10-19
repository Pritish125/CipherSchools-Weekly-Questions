#include <iostream>
using namespace std;

// Function to calculate x^n
double pow(double x, int n) {
    double result = 1.0;
    long long power = n;
    
    // If n is negative, invert x and take positive power
    if (power < 0) {
        x = 1 / x;
        power = -power;
    }

    // Exponentiation by squaring method
    while (power > 0) {
        if (power % 2 == 1) {
            result *= x;  // Multiply the result by x if the power is odd
        }
        x *= x;  // Square the base
        power /= 2;  // Halve the power
    }

    return result;
}

int main() {
    double x;
    int n;
    
    // Take input for x and n
    cout << "Enter the daily energy production (kWh): ";
    cin >> x;
    cout << "Enter the number of days: ";
    cin >> n;

    // Calculate and print the total energy generated
    double totalEnergy = pow(x, n);
    cout << "Total energy produced over " << n << " days: " << totalEnergy << " kWh" << endl;

    return 0;
}
