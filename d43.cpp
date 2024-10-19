#include <iostream>
#include <fstream>
#include <string>
#include <stdexcept>
using namespace std;

class NonIntegerDataException : public exception {
public:
    const char* what() const noexcept override {
        return "Non-integer data found in the file.";
    }
};

int main() {
    string filePath;
    cout << "Enter the file path: ";
    cin >> filePath;

    try {
        ifstream file(filePath);
        if (!file.is_open()) {
            throw ios_base::failure("Could not open the file.");
        }

        int sum = 0;
        int value;

        while (file >> value) {
            sum += value;
        }

        if (file.fail() && !file.eof()) {
            throw NonIntegerDataException();
        }

        cout << "Sum of integers: " << sum << endl;
    } catch (const NonIntegerDataException& e) {
        cout << "Error: " << e.what() << endl;
    } catch (const ios_base::failure& e) {
        cout << "Error: " << e.what() << endl;
    } catch (const exception& e) {
        cout << "Error: " << e.what() << endl;
    }

    return 0;
}
