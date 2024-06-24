#include <iostream>
#include <vector>
#include <memory>
#include <stdexcept>
#include <chrono>
#include <thread>

// Coding Style and Naming Conventions
class MyClass {
public:
    void doSomething() {
        std::cout << "MyClass is doing something." << std::endl;
    }
};

// Separation of Concerns
class DataAccessLayer {
public:
    static std::vector<int> fetchData() {
        return {1, 2, 3, 4, 5};
    }
};

class BusinessLogicLayer {
public:
    static void processData(const std::vector<int>& data) {
        for (int num : data) {
            std::cout << "Processing data: " << num << std::endl;
        }
    }
};

class PresentationLayer {
public:
    static void displayData() {
        std::vector<int> data = DataAccessLayer::fetchData();
        BusinessLogicLayer::processData(data);
    }
};

// Error Handling and Exception Management
class CustomException : public std::exception {
public:
    const char* what() const noexcept override {
        return "Custom exception occurred.";
    }
};

void throwCustomException() {
    throw CustomException();
}

// Memory Management
void useSmartPointers() {
    std::unique_ptr<MyClass> uniquePtr(new MyClass());
    uniquePtr->doSomething();

    std::shared_ptr<MyClass> sharedPtr1(new MyClass());
    std::shared_ptr<MyClass> sharedPtr2 = sharedPtr1;
    sharedPtr1->doSomething();
    sharedPtr2->doSomething();
}

// Optimization and Performance Considerations
void performanceOptimization() {
    std::vector<int> numbers = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    auto start = std::chrono::high_resolution_clock::now();
    for (int i = 0; i < 1000000; i++) {
        int sum = 0;
        for (int num : numbers) {
            sum += num;
        }
        (void)sum; // Avoid unused variable warning
    }
    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> duration = end - start;
    std::cout << "Time taken: " << duration.count() << " seconds" << std::endl;
}

int main() {
    // Coding Style and Naming Conventions
    MyClass myObject;
    myObject.doSomething();

    // Separation of Concerns
    PresentationLayer::displayData();

    // Error Handling and Exception Management
    try {
        throwCustomException();
    } catch (const CustomException& e) {
        std::cerr << e.what() << std::endl;
    }

    // Memory Management
    useSmartPointers();

    // Optimization and Performance Considerations
    performanceOptimization();

    return 0;
}