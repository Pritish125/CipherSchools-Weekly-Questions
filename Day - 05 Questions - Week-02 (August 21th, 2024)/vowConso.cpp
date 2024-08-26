#include <iostream>
#include <string>

using namespace std;

void countVC(string &s, int &vowels, int &consonants) {
    vowels = consonants = 0;
    for (int i = 0; i < s.length(); ++i) {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') {
            ++vowels;
        } else {
            ++consonants;
        }
    }
}

int main() {
    string s;
    int vowels, consonants;
    cout << "Enter a string: ";
    cin >> s;
    countVC(s, vowels, consonants);
    cout << "Number of vowels: " << vowels << endl;
    cout << "Number of consonants: " << consonants << endl;
    return 0;
}
