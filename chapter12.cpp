#include <iostream>
#include <vector>
#include <algorithm>
#include <memory>
#include <thread>
#include <mutex>

// Lambdas
void lambdaExample() {
    std::vector<int> numbers = {1, 2, 3, 4, 5};

    // Using a lambda to double each element in the vector
    std::transform(numbers.begin(), numbers.end(), numbers.begin(),
                   [](int x) { return x * 2; });

    std::cout << "Doubled numbers: ";
    for (int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
}

// Smart Pointers
class MyClass {
public:
    MyClass() { std::cout << "MyClass object created" << std::endl; }
    ~MyClass() { std::cout << "MyClass object destroyed" << std::endl; }
};

void smartPointersExample() {
    // std::unique_ptr
    std::cout << "std::unique_ptr:" << std::endl;
    std::unique_ptr<MyClass> uniquePtr(new MyClass());

    // std::shared_ptr
    std::cout << "std::shared_ptr:" << std::endl;
    std::shared_ptr<MyClass> sharedPtr1(new MyClass());
    std::shared_ptr<MyClass> sharedPtr2 = sharedPtr1;
}

// Concurrency
std::mutex mtx;

void printMessage(const std::string& message) {
    mtx.lock();
    std::cout << message << std::endl;
    mtx.unlock();
}

void concurrencyExample() {
    std::thread t1(printMessage, "Hello from thread 1");
    std::thread t2(printMessage, "Hello from thread 2");

    t1.join();
    t2.join();
}

int main() {
    // Lambdas
    lambdaExample();

    // Smart Pointers
    smartPointersExample();

    // Concurrency
    concurrencyExample();

    return 0;
}