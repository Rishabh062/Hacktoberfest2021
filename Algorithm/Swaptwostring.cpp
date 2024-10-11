#include <iostream>
#include <string>

void swapStrings(std::string &str1, std::string &str2) {
    if (str1.length() != str2.length()) {
        std::cout << "Strings must be of the same length!" << std::endl;
        return;
    }

    for (size_t i = 0; i < str1.length(); ++i) {
        str1[i] = str1[i] ^ str2[i]; // Step 1
        str2[i] = str1[i] ^ str2[i]; // Step 2
        str1[i] = str1[i] ^ str2[i]; // Step 3
    }
}

int main() {
    std::string str1 = "hello";
    std::string str2 = "world";

    std::cout << "Before swap: str1 = " << str1 << ", str2 = " << str2 << std::endl;
    
    swapStrings(str1, str2);

    std::cout << "After swap: str1 = " << str1 << ", str2 = " << str2 << std::endl;

    return 0;
}
