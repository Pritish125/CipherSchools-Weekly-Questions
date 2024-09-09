#include <iostream>
#include <string>

std::string concatenateStrings(const std::string &str1, const std::string &str2) {
    std::string result = str1;
    for (int i = 0; str2[i] != '\0'; i++) {
        result += str2[i];
    }
    return result;
}

int main() {
    std::string str1 = "Hello, ";
    std::string str2 = "World!";
    std::cout << concatenateStrings(str1, str2) << std::endl;

    std::string str3 = "OpenAI ";
    std::string str4 = "GPT-4";
    std::cout << concatenateStrings(str3, str4) << std::endl;

    std::string str5 = "C++ ";
    std::string str6 = "Programming";
    std::cout << concatenateStrings(str5, str6) << std::endl;

    return 0;
}
