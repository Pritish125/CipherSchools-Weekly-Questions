#include <iostream>
#include <string>

bool isPalindrome(const std::string &str) {
    int left = 0, right = str.length() - 1;

    while (left < right) {
        while (left < right && !isalnum(str[left])) {
            left++;
        }
        while (left < right && !isalnum(str[right])) {
            right--;
        }

        if (tolower(str[left]) != tolower(str[right])) {
            return false;
        }

        left++;
        right--;
    }
    return true;
}

int main() {
    std::string str1 = "A man, a plan, a canal, Panama";
    std::cout << isPalindrome(str1) << std::endl;

    std::string str2 = "OpenAI";
    std::cout << isPalindrome(str2) << std::endl;

    std::string str3 = "racecar";
    std::cout << isPalindrome(str3) << std::endl;

    return 0;
}
