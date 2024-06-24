

# Chapter 3: Control Flow and Functions

In this chapter, we'll explore more advanced control flow structures, including loops and functions, which are essential for building more complex programs in C++.

## Loops

Loops allow you to repeat a block of code multiple times, based on a certain condition. C++ provides three main types of loops:

1. **`for` loop**: Executes a block of code a fixed number of times.

```cpp
for (int i = 0; i < 5; i++) {
    std::cout << "Iteration " << i << std::endl;
}
```

2. **`while` loop**: Executes a block of code as long as a certain condition is true.

```cpp
int count = 0;
while (count < 3) {
    std::cout << "Count: " << count << std::endl;
    count++;
}
```

3. **`do-while` loop**: Executes a block of code at least once, and then continues to execute the block as long as a certain condition is true.

```cpp
int num = 0;
do {
    std::cout << "Number: " << num << std::endl;
    num++;
} while (num < 3);
```

## Functions

Functions are reusable blocks of code that perform a specific task. They can take input parameters and return values. Here's an example of a simple function:

```cpp
int addNumbers(int a, int b) {
    int sum = a + b;
    return sum;
}

int main() {
    int result = addNumbers(5, 3);
    std::cout << "The sum is: " << result << std::endl;
    return 0;
}
```

In this example, the `addNumbers` function takes two integer parameters, `a` and `b`, and returns their sum.

You can also create functions that don't take any parameters and don't return any values (known as "void" functions):

```cpp
void sayHello() {
    std::cout << "Hello, world!" << std::endl;
}

int main() {
    sayHello();
    return 0;
}
```

Functions can be very powerful when used in combination with control flow structures, such as loops and conditional statements. They allow you to break down your code into smaller, more manageable pieces, making it easier to write, debug, and maintain.

In the next chapter, we'll dive deeper into C++ data structures, including arrays and strings.