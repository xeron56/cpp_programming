

# Chapter 12: Advanced C++ Features

In this chapter, we'll explore some more advanced C++ features, including lambdas, smart pointers, and concurrency.

## Lambdas

Lambdas, also known as anonymous functions, are a way to define small, inline functions in C++. They can be particularly useful when you need a function for a specific task, but don't want to define a separate named function.

Here's an example of using a lambda:

```cpp
#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5};

    // Using a lambda to double each element in the vector
    std::transform(numbers.begin(), numbers.end(), numbers.begin(),
                   [](int x) { return x * 2; });

    for (int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
```

In this example, the lambda `[](int x) { return x * 2; }` is used as the third argument to the `std::transform` function, which applies the doubling operation to each element in the `numbers` vector.

## Smart Pointers

Smart pointers are RAII (Resource Acquisition Is Initialization) wrappers around raw pointers that automatically manage the memory allocated for an object. We covered smart pointers in Chapter 10, but let's revisit them in more detail.

The C++ standard library provides three main types of smart pointers:

1. **`std::unique_ptr`**: Represents unique ownership of a dynamically allocated object.
2. **`std::shared_ptr`**: Represents shared ownership of a dynamically allocated object.
3. **`std::weak_ptr`**: Represents a non-owning reference to an object managed by a `std::shared_ptr`.

Here's an example of using `std::unique_ptr` and `std::shared_ptr`:

```cpp
#include <iostream>
#include <memory>

class MyClass {
public:
    MyClass() { std::cout << "MyClass object created" << std::endl; }
    ~MyClass() { std::cout << "MyClass object destroyed" << std::endl; }
};

int main() {
    // std::unique_ptr
    std::unique_ptr<MyClass> uniquePtr(new MyClass());

    // std::shared_ptr
    std::shared_ptr<MyClass> sharedPtr1(new MyClass());
    std::shared_ptr<MyClass> sharedPtr2 = sharedPtr1;

    return 0;
}
```

In this example, the `std::unique_ptr` ensures that the `MyClass` object is destroyed when the `uniquePtr` goes out of scope. The `std::shared_ptr` allows multiple pointers to reference the same object, and the object is destroyed when the last `std::shared_ptr` referencing it is destroyed.

## Concurrency

Concurrency in C++ allows you to write programs that can execute multiple tasks simultaneously. The C++ standard library provides several synchronization primitives and tools for concurrent programming, including:

1. **`std::thread`**: Represents a single thread of execution.
2. **`std::mutex`**: Provides a mutual exclusion mechanism to protect shared resources.
3. **`std::condition_variable`**: Allows threads to synchronize their execution by waiting for specific conditions to be met.

Here's an example of using `std::thread` and `std::mutex`:

```cpp
#include <iostream>
#include <thread>
#include <mutex>

std::mutex mtx;

void printMessage(const std::string& message) {
    mtx.lock();
    std::cout << message << std::endl;
    mtx.unlock();
}

int main() {
    std::thread t1(printMessage, "Hello from thread 1");
    std::thread t2(printMessage, "Hello from thread 2");

    t1.join();
    t2.join();

    return 0;
}
```

In this example, two threads are created, each calling the `printMessage` function with a different string. The `std::mutex` is used to ensure that the output from the two threads is not interleaved.

These are just a few examples of the advanced C++ features covered in this chapter. In the next chapter, we'll explore more specific C++ programming techniques and best practices.