#include <iostream>
#include <exception>
#include <string>

// Custom exception class
class MyException : public std::exception {
private:
    std::string message;

public:
    MyException(const std::string& msg) : message(msg) {}

    virtual const char* what() const noexcept override {
        return message.c_str();
    }
};

// Function that might throw an exception
void divideNumbers(int num, int den) {
    if (den == 0) {
        throw std::invalid_argument("Division by zero");
    }

    int result = num / den;
    std::cout << "Result: " << result << std::endl;
}

// Function that won't throw any exceptions
void doSomething() noexcept {
    std::cout << "Doing something without exceptions" << std::endl;
}

// Function that might throw a specific exception
void doSomethingElse() throw(MyException) {
    throw MyException("Something went wrong");
}

int main() {
    // Exception handling with try-catch
    try {
        divideNumbers(10, 0);
    } catch (const std::invalid_argument& e) {
        std::cerr << "Invalid argument exception: " << e.what() << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Standard exception occurred: " << e.what() << std::endl;
    }

    // Calling a function that won't throw exceptions
    try {
        doSomething();
    } catch (...) {
        std::cerr << "Unexpected exception occurred" << std::endl;
    }

    // Calling a function that might throw a specific exception
    try {
        doSomethingElse();
    } catch (const MyException& e) {
        std::cerr << "Custom exception occurred: " << e.what() << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Standard exception occurred: " << e.what() << std::endl;
    }

    // Throwing a custom exception
    try {
        throw MyException("This is a custom exception");
    } catch (const MyException& e) {
        std::cerr << "Caught custom exception: " << e.what() << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Caught standard exception: " << e.what() << std::endl;
    }

    return 0;
}