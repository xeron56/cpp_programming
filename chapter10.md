

# Chapter 10: Advanced C++ Concepts

In this chapter, we'll explore more advanced C++ concepts, including move semantics and smart pointers.

## Move Semantics

Move semantics in C++ allow you to efficiently transfer the ownership of resources (such as memory) from one object to another, instead of copying the data. This can lead to significant performance improvements, especially when working with large objects.

Here's an example of using move semantics with a custom class:

```cpp
#include <iostream>
#include <string>

class MyClass {
private:
    std::string data;

public:
    MyClass(const std::string& str) : data(str) {
        std::cout << "Copy constructor called" << std::endl;
    }

    MyClass(std::string&& str) : data(std::move(str)) {
        std::cout << "Move constructor called" << std::endl;
    }

    MyClass& operator=(const MyClass& other) {
        data = other.data;
        std::cout << "Copy assignment operator called" << std::endl;
        return *this;
    }

    MyClass& operator=(MyClass&& other) noexcept {
        data = std::move(other.data);
        std::cout << "Move assignment operator called" << std::endl;
        return *this;
    }
};

int main() {
    MyClass obj1 = "Hello, world!";
    MyClass obj2 = std::move(obj1);
    obj2 = "C++ is awesome!";

    return 0;
}
```

In this example, the `MyClass` has a move constructor and a move assignment operator that allow the transfer of the `data` member without copying it.

## Smart Pointers

Smart pointers in C++ are RAII (Resource Acquisition Is Initialization) wrappers around raw pointers that automatically manage the memory allocated for an object. The STL provides three main types of smart pointers:

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

These are just a few of the advanced C++ concepts covered in this chapter. In the next chapter, we'll explore more specific C++ programming techniques and best practices.