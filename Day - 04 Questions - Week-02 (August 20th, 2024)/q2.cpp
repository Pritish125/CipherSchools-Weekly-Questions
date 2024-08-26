#include <iostream>

using namespace std;

class Complex {
public:
    int real, imag;

    Complex(int r = 0, int i = 0) : real(r), imag(i) {}

    Complex operator+(Complex &c) {
        return Complex(real + c.real, imag + c.imag);
    }

    Complex operator-(Complex &c) {
        return Complex(real - c.real, imag - c.imag);
    }

    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    Complex c1(3, 4), c2(1, 2);

    cout << "Complex Number 1: ";
    c1.display();
    
    cout << "Complex Number 2: ";
    c2.display();

    Complex sum = c1 + c2;
    Complex diff = c1 - c2;

    cout << "Sum: ";
    sum.display();

    cout << "Difference: ";
    diff.display();

    return 0;
}
