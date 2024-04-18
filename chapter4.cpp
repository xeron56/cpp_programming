#include <iostream>
#include <string>
#include <algorithm>

int main() {
    // Arrays
    int myIntArray[5] = {10, 20, 30, 40, 50};

    // Accessing array elements
    std::cout << "Element at index 2: " << myIntArray[2] << std::endl;

    // Iterating through an array
    std::cout << "Array elements: ";
    for (int i = 0; i < 5; i++) {
        std::cout << myIntArray[i] << " ";
    }
    std::cout << std::endl;

    // Array size
    std::cout << "Array size: " << sizeof(myIntArray) / sizeof(myIntArray[0]) << std::endl;

    // Strings
    // C-style strings
    char cString[] = "Hello, C-style string!";
    std::cout << "C-style string: " << cString << std::endl;

    // C++ strings
    std::string cppString = "Hello, C++ string!";
    std::cout << "C++ string: " << cppString << std::endl;

    // String operations
    std::string concatString = cppString + " Concatenated!";
    std::cout << "Concatenated string: " << concatString << std::endl;

    // Substring
    std::string substring = concatString.substr(7, 6);
    std::cout << "Substring: " << substring << std::endl;

    // String comparison
    if (cppString == "Hello, C++ string!") {
        std::cout << "Strings are equal" << std::endl;
    } else {
        std::cout << "Strings are not equal" << std::endl;
    }

    // String manipulation
    std::transform(cppString.begin(), cppString.end(), cppString.begin(), ::toupper);
    std::cout << "Uppercase string: " << cppString << std::endl;

    return 0;
}