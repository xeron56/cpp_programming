#include <iostream>
#include <string>
#include <memory>

// Move Semantics
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

    const std::string& getData() const {
        return data;
    }
};

// Smart Pointers
class Resource {
public:
    Resource() {
        std::cout << "Resource created" << std::endl;
    }

    ~Resource() {
        std::cout << "Resource destroyed" << std::endl;
    }
};

int main() {
    // Move Semantics
    std::cout << "Move Semantics:" << std::endl;
    MyClass obj1 = "Hello, world!";
    MyClass obj2 = std::move(obj1);
    std::cout << "obj2 data: " << obj2.getData() << std::endl;

    MyClass obj3 = "C++ is awesome!";
    obj3 = std::move(obj2);
    std::cout << "obj3 data: " << obj3.getData() << std::endl;

    // Smart Pointers
    std::cout << "\nSmart Pointers:" << std::endl;

    // std::unique_ptr
    std::cout << "std::unique_ptr:" << std::endl;
    std::unique_ptr<Resource> uniquePtr(new Resource());

    // std::shared_ptr
    std::cout << "std::shared_ptr:" << std::endl;
    std::shared_ptr<Resource> sharedPtr1(new Resource());
    std::shared_ptr<Resource> sharedPtr2 = sharedPtr1;

    // std::weak_ptr
    std::cout << "std::weak_ptr:" << std::endl;
    std::weak_ptr<Resource> weakPtr = sharedPtr1;
    if (!weakPtr.expired()) {
        std::shared_ptr<Resource> lockedPtr = weakPtr.lock();
        std::cout << "Weak pointer successfully locked" << std::endl;
    } else {
        std::cout << "Weak pointer has expired" << std::endl;
    }

    return 0;
}