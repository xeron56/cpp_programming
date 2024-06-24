

# Chapter 6: Advanced C++ Concepts

In this chapter, we'll explore some more advanced concepts in C++, including operator overloading and templates.

## Operator Overloading

Operator overloading allows you to define how operators (+, -, *, /, etc.) behave when used with custom data types, such as classes. This can make your code more intuitive and expressive.

Here's an example of overloading the `+` operator for a `Vector2D` class:

```cpp
class Vector2D {
private:
    int x;
    int y;

public:
    Vector2D(int x, int y) : x(x), y(y) {}

    Vector2D operator+(const Vector2D& other) {
        return Vector2D(x + other.x, y + other.y);
    }

    friend std::ostream& operator<<(std::ostream& os, const Vector2D& vec);
};

std::ostream& operator<<(std::ostream& os, const Vector2D& vec) {
    os << "(" << vec.x << ", " << vec.y << ")";
    return os;
}

int main() {
    Vector2D v1(1, 2);
    Vector2D v2(3, 4);
    Vector2D v3 = v1 + v2;

    std::cout << "v1: " << v1 << std::endl;
    std::cout << "v2: " << v2 << std::endl;
    std::cout << "v3: " << v3 << std::endl;

    return 0;
}
```

In this example, we've overloaded the `+` operator to add two `Vector2D` objects, and the `<<` operator to display a `Vector2D` object using `std::cout`.

## Templates

Templates in C++ allow you to write generic code that can work with different data types. This can help you write more reusable and type-safe code.

Here's an example of a simple generic `swap` function:

```cpp
template <typename T>
void swap(T& a, T& b) {
    T temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 5, y = 10;
    std::cout << "Before swap: x = " << x << ", y = " << y << std::endl;
    swap(x, y);
    std::cout << "After swap: x = " << x << ", y = " << y << std::endl;

    std::string str1 = "Hello", str2 = "World";
    std::cout << "Before swap: str1 = " << str1 << ", str2 = " << str2 << std::endl;
    swap(str1, str2);
    std::cout << "After swap: str1 = " << str1 << ", str2 = " << str2 << std::endl;

    return 0;
}
```

In this example, the `swap` function is a template that can work with any data type `T`. The `main` function demonstrates using the `swap` function with both `int` and `std::string` types.

Templates can also be used to create generic data structures, such as `std::vector` and `std::map`, which are part of the C++ standard library.

In the next chapter, we'll explore file I/O and working with the file system in C++.