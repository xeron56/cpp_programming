

# Chapter 8: Exception Handling in C++

In this chapter, we'll explore how to handle exceptions in C++. Exceptions are events that disrupt the normal flow of a program's execution, and they need to be properly handled to ensure the robustness and reliability of your application.

## Basics of Exception Handling

In C++, exception handling is achieved using the following keywords:

1. **`try`**: This block contains the code that might throw an exception.
2. **`catch`**: This block handles the exception that is thrown.
3. **`throw`**: This keyword is used to explicitly throw an exception.

Here's a simple example of exception handling:

```cpp
#include <iostream>

int main() {
    try {
        int x = 10, y = 0;
        int result = x / y; // This will throw a divide-by-zero exception
        std::cout << "Result: " << result << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Exception occurred: " << e.what() << std::endl;
    }

    return 0;
}
```

In this example, the `try` block contains a division operation that will throw a `std::exception` because of the division by zero. The `catch` block handles the exception and prints the error message.

## Custom Exceptions

You can also define your own custom exception types by creating classes that inherit from the `std::exception` class or one of its subclasses. This allows you to provide more specific and meaningful error messages.

Here's an example of a custom exception class:

```cpp
#include <iostream>
#include <exception>
#include <string>

class MyException : public std::exception {
private:
    std::string message;

public:
    MyException(const std::string& msg) : message(msg) {}

    virtual const char* what() const noexcept override {
        return message.c_str();
    }
};

int main() {
    try {
        throw MyException("This is a custom exception.");
    } catch (const MyException& e) {
        std::cerr << "Custom exception occurred: " << e.what() << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Standard exception occurred: " << e.what() << std::endl;
    }

    return 0;
}
```

In this example, we define a custom exception class `MyException` that inherits from `std::exception`. The `what()` method is overridden to provide a custom error message.

## Exception Specifications

You can also specify which exceptions a function might throw using the `noexcept` keyword or the `throw` specification. This can help ensure that your code is more robust and predictable.

Here's an example:

```cpp
#include <iostream>

void doSomething() noexcept {
    // This function will not throw any exceptions
}

void doSomethingElse() throw(std::runtime_error) {
    // This function might throw a std::runtime_error exception
    throw std::runtime_error("Something went wrong.");
}

int main() {
    try {
        doSomething();
        doSomethingElse();
    } catch (const std::runtime_error& e) {
        std::cerr << "Runtime error occurred: " << e.what() << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Standard exception occurred: " << e.what() << std::endl;
    }

    return 0;
}
```

In this example, the `doSomething()` function is marked as `noexcept`, indicating that it will not throw any exceptions. The `doSomethingElse()` function is marked as potentially throwing a `std::runtime_error` exception, and it does indeed throw such an exception.

In the next chapter, we'll explore the C++ Standard Template Library (STL) and some of its commonly used components.