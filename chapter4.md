

# Chapter 4: C++ Data Structures

In this chapter, we'll dive into two fundamental data structures in C++: arrays and strings.

## Arrays

Arrays are a collection of elements of the same data type. They are stored in contiguous memory locations, allowing for efficient access and manipulation of the data.

To declare an array in C++, you need to specify the data type and the size of the array:

```cpp
int myArray[5]; // Declares an array of 5 integers
```

You can then access and modify the elements of the array using an index, starting from 0:

```cpp
myArray[0] = 10;
myArray[1] = 20;
myArray[2] = 30;
```

You can also initialize an array with values during declaration:

```cpp
int myArray[] = {10, 20, 30, 40, 50};
```

C++ also provides various functions and operations to work with arrays, such as looping through the elements, finding the size of the array, and sorting the elements.

## Strings

Strings in C++ are a sequence of characters, and they are often used to represent text data. C++ has two main ways to represent strings:

1. **C-style strings**: These are null-terminated character arrays, which are declared using the `char` data type.

```cpp
char myString[] = "Hello, world!";
```

2. **C++ strings**: These are objects of the `std::string` class, which provide more functionality and flexibility compared to C-style strings.

```cpp
#include <string>
std::string myString = "Hello, world!";
```

You can perform various operations on strings, such as concatenation, substring extraction, and comparison. The C++ standard library also provides a wide range of string-related functions and methods.

Here's an example of using both arrays and strings:

```cpp
#include <iostream>
#include <string>

int main() {
    // Arrays
    int myArray[] = {10, 20, 30, 40, 50};
    std::cout << "Array element at index 2: " << myArray[2] << std::endl;

    // C-style strings
    char cString[] = "Hello, world!";
    std::cout << "C-style string: " << cString << std::endl;

    // C++ strings
    std::string cppString = "C++ is awesome!";
    std::cout << "C++ string: " << cppString << std::endl;

    return 0;
}
```

In the next chapter, we'll explore the fundamentals of object-oriented programming (OOP) in C++.