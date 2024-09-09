#include <iostream>
#include <string>

int countCharacter(const std::string &str, char ch) {
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) {
            count++;
        }
    }
    return count;
}

int main() {
    std::string str1 = "Hello, World!";
    char ch1 = 'l';
    std::cout << countCharacter(str1, ch1) << std::endl;

    std::string str2 = "OpenAI GPT-4";
    char ch2 = 'P';
    std::cout << countCharacter(str2, ch2) << std::endl;

    std::string str3 = "C++ Programming";
    char ch3 = 'g';
    std::cout << countCharacter(str3, ch3) << std::endl;

    return 0;
}
