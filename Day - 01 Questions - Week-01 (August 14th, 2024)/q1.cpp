#include <iostream>
#include <string>

using namespace std;

int main() {
    string str1, str2, concatenated;

    cout << "Enter the first string: ";
    cin >> str1;

    cout << "Enter the second string: ";
    cin >> str2;

    concatenated = str1 + str2;

    cout << "Concatenated string: " << concatenated << endl;

    return 0;
}
