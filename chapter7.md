Here is Chapter 7 of the C++ coding tutorial:

# Chapter 7: File I/O in C++

In this chapter, we'll explore how to work with files in C++, including reading from and writing to files.

## File Streams

In C++, we use file streams to interact with files. The main file stream classes are:

1. **`std::ifstream`**: Used for reading from files.
2. **`std::ofstream`**: Used for writing to files.
3. **`std::fstream`**: Used for both reading from and writing to files.

Here's an example of reading from a file:

```cpp
#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::ifstream inputFile("example.txt");

    if (inputFile.is_open()) {
        std::string line;
        while (std::getline(inputFile, line)) {
            std::cout << line << std::endl;
        }
        inputFile.close();
    } else {
        std::cout << "Unable to open file" << std::endl;
    }

    return 0;
}
```

And here's an example of writing to a file:

```cpp
#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::ofstream outputFile("output.txt");

    if (outputFile.is_open()) {
        outputFile << "Hello, world!" << std::endl;
        outputFile << "This is a test file." << std::endl;
        outputFile.close();
    } else {
        std::cout << "Unable to open file" << std::endl;
    }

    return 0;
}
```

## File Modes

When working with files, you can specify different file modes to control how the file is accessed. Some common file modes include:

- `std::ios::in`: Open the file for reading.
- `std::ios::out`: Open the file for writing.
- `std::ios::app`: Open the file for appending (writing at the end of the file).
- `std::ios::trunc`: Truncate the file to zero length upon opening.

You can combine these modes using the `|` operator. For example, `std::ios::in | std::ios::out` opens the file for both reading and writing.

## File Positioning

You can control the position in the file where the next read or write operation will occur using the following functions:

- `seekg()`: Sets the position indicator associated with the input sequence.
- `seekp()`: Sets the position indicator associated with the output sequence.
- `tellg()`: Returns the current value of the input stream position indicator.
- `tellp()`: Returns the current value of the output stream position indicator.

Here's an example of using `seekg()` and `tellg()`:

```cpp
#include <iostream>
#include <fstream>

int main() {
    std::ifstream inputFile("example.txt");

    if (inputFile.is_open()) {
        std::string line;
        std::getline(inputFile, line);
        std::cout << "First line: " << line << std::endl;

        inputFile.seekg(0, std::ios::beg);
        std::cout << "Current position: " << inputFile.tellg() << std::endl;

        std::getline(inputFile, line);
        std::cout << "First line again: " << line << std::endl;

        inputFile.close();
    } else {
        std::cout << "Unable to open file" << std::endl;
    }

    return 0;
}
```

In the next chapter, we'll explore exception handling in C++.