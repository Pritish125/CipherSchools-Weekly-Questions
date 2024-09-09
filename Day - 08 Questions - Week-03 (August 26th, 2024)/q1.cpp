#include <iostream>
#include <string>

int stringLength(const std::string &str) {
    int len = 0;
    while (str[len] != '\0') {
        len++;
    }
    return len;
}

int main() {
    std::string str1 = "Hello, World!";
    std::cout << stringLength(str1) << std::endl;

    std::string str2 = "OpenAI GPT-4";
    std::cout << stringLength(str2) << std::endl;

    std::string str3 = "C++ Programming";
    std::cout << stringLength(str3) << std::endl;

    return 0;
}
