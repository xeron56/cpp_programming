

# Chapter 2: C++ Basics

In this chapter, we'll cover the fundamental concepts and syntax of the C++ programming language.

## Variables and Data Types

In C++, variables are used to store data that can be accessed and manipulated throughout the program. Each variable has a specific data type, which determines the kind of data it can store.

Some of the most common data types in C++ include:

- `int`: Stores integer values (whole numbers)
- `float` and `double`: Stores floating-point numbers (decimal values)
- `char`: Stores single characters (letters, numbers, or symbols)
- `bool`: Stores boolean values (true or false)

You can declare a variable like this:

```cpp
int myVariable = 42;
float pi = 3.14159;
char myCharacter = 'A';
bool isTrue = true;
```

## Operators

C++ provides a wide range of operators that you can use to perform various operations on your data. Some common operators include:

- Arithmetic operators: `+`, `-`, `*`, `/`, `%`
- Assignment operators: `=`, `+=`, `-=`, `*=`, `/=`
- Comparison operators: `==`, `!=`, `<`, `>`, `<=`, `>=`
- Logical operators: `&&` (and), `||` (or), `!` (not)

Here's an example of using some of these operators:

```cpp
int a = 10;
int b = 5;
int c = a + b; // c = 15
bool isGreater = a > b; // isGreater = true
```

## Conditional Statements

Conditional statements allow you to control the flow of your program based on certain conditions. The most common conditional statement is the `if-else` statement:

```cpp
int age = 18;
if (age >= 18) {
    std::cout << "You are an adult." << std::endl;
} else {
    std::cout << "You are a minor." << std::endl;
}
```

You can also use the `switch` statement to handle multiple conditions:

```cpp
int dayOfWeek = 3;
switch (dayOfWeek) {
    case 1:
        std::cout << "Monday" << std::endl;
        break;
    case 2:
        std::cout << "Tuesday" << std::endl;
        break;
    case 3:
        std::cout << "Wednesday" << std::endl;
        break;
    // Additional cases...
    default:
        std::cout << "Invalid day" << std::endl;
        break;
}
```

In the next chapter, we'll dive deeper into control flow structures, including loops and functions.