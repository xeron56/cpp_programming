#include <iostream>
#include <string>

// Operator Overloading
class Vector2D {
private:
    int x;
    int y;

public:
    Vector2D(int x, int y) : x(x), y(y) {}

    Vector2D operator+(const Vector2D& other) {
        return Vector2D(x + other.x, y + other.y);
    }

    Vector2D operator-(const Vector2D& other) {
        return Vector2D(x - other.x, y - other.y);
    }

    Vector2D operator*(int scalar) {
        return Vector2D(x * scalar, y * scalar);
    }

    bool operator==(const Vector2D& other) {
        return (x == other.x && y == other.y);
    }

    friend std::ostream& operator<<(std::ostream& os, const Vector2D& vec);
};

std::ostream& operator<<(std::ostream& os, const Vector2D& vec) {
    os << "(" << vec.x << ", " << vec.y << ")";
    return os;
}

// Templates
template <typename T>
void swap(T& a, T& b) {
    T temp = a;
    a = b;
    b = temp;
}

template <typename T>
T getMax(T a, T b) {
    return (a > b) ? a : b;
}

int main() {
    // Operator Overloading
    Vector2D v1(1, 2);
    Vector2D v2(3, 4);
    Vector2D v3 = v1 + v2;
    Vector2D v4 = v2 - v1;
    Vector2D v5 = v3 * 2;

    std::cout << "v1: " << v1 << std::endl;
    std::cout << "v2: " << v2 << std::endl;
    std::cout << "v3 = v1 + v2: " << v3 << std::endl;
    std::cout << "v4 = v2 - v1: " << v4 << std::endl;
    std::cout << "v5 = v3 * 2: " << v5 << std::endl;

    if (v1 == Vector2D(1, 2)) {
        std::cout << "v1 and (1, 2) are equal" << std::endl;
    } else {
        std::cout << "v1 and (1, 2) are not equal" << std::endl;
    }

    // Templates
    int x = 5, y = 10;
    std::cout << "Before swap: x = " << x << ", y = " << y << std::endl;
    swap(x, y);
    std::cout << "After swap: x = " << x << ", y = " << y << std::endl;

    std::string str1 = "Hello", str2 = "World";
    std::cout << "Before swap: str1 = " << str1 << ", str2 = " << str2 << std::endl;
    swap(str1, str2);
    std::cout << "After swap: str1 = " << str1 << ", str2 = " << str2 << std::endl;

    int maxInt = getMax(20, 30);
    std::cout << "Maximum of 20 and 30 is: " << maxInt << std::endl;

    double maxDouble = getMax(3.14, 2.71);
    std::cout << "Maximum of 3.14 and 2.71 is: " << maxDouble << std::endl;

    return 0;
}