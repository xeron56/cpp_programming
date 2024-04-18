#include <iostream>

int main() {
    // Variables and Data Types
    int myInteger = 42;
    float myFloat = 3.14159;
    char myChar = 'A';
    bool myBool = true;

    std::cout << "Integer: " << myInteger << std::endl;
    std::cout << "Float: " << myFloat << std::endl;
    std::cout << "Character: " << myChar << std::endl;
    std::cout << "Boolean: " << myBool << std::endl;

    // Operators
    int a = 10;
    int b = 5;
    int sum = a + b;
    int difference = a - b;
    int product = a * b;
    int quotient = a / b;
    int remainder = a % b;

    std::cout << "Arithmetic Operations:" << std::endl;
    std::cout << "a + b = " << sum << std::endl;
    std::cout << "a - b = " << difference << std::endl;
    std::cout << "a * b = " << product << std::endl;
    std::cout << "a / b = " << quotient << std::endl;
    std::cout << "a % b = " << remainder << std::endl;

    bool isGreater = a > b;
    bool isEqual = a == b;

    std::cout << "Comparison Operations:" << std::endl;
    std::cout << "a > b: " << isGreater << std::endl;
    std::cout << "a == b: " << isEqual << std::endl;

    // Conditional Statements
    int age = 18;
    if (age >= 18) {
        std::cout << "You are an adult." << std::endl;
    } else {
        std::cout << "You are a minor." << std::endl;
    }

    int dayOfWeek = 3;
    switch (dayOfWeek) {
        case 1:
            std::cout << "Monday" << std::endl;
            break;
        case 2:
            std::cout << "Tuesday" << std::endl;
            break;
        case 3:
            std::cout << "Wednesday" << std::endl;
            break;
        default:
            std::cout << "Invalid day" << std::endl;
            break;
    }

    return 0;
}