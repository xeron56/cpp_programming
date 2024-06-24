

# Chapter 9: C++ Standard Template Library (STL)

The C++ Standard Template Library (STL) is a collection of pre-built data structures and algorithms that provide a wide range of functionality for C++ programming. In this chapter, we'll explore some of the commonly used components of the STL.

## Containers

Containers are data structures that store collections of elements. The STL provides several container classes, including:

1. **`std::vector`**: A dynamic array that can grow and shrink in size.
2. **`std::list`**: A doubly-linked list.
3. **`std::deque`**: A double-ended queue that allows for efficient insertion and removal at both ends.
4. **`std::set`** and **`std::unordered_set`**: Ordered and unordered sets of unique elements.
5. **`std::map`** and **`std::unordered_map`**: Ordered and unordered associative arrays that store key-value pairs.

Here's an example of using `std::vector`:

```cpp
#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5};

    // Accessing elements
    std::cout << "First element: " << numbers[0] << std::endl;
    std::cout << "Last element: " << numbers.back() << std::endl;

    // Iterating through the vector
    for (int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Adding and removing elements
    numbers.push_back(6);
    numbers.pop_back();

    return 0;
}
```

## Algorithms

The STL also provides a wide range of algorithms that can be used to manipulate the data stored in containers. Some common algorithms include:

1. **`std::sort`**: Sorts the elements in a container.
2. **`std::find`**: Searches for an element in a container.
3. **`std::accumulate`**: Computes the sum of the elements in a container.
4. **`std::transform`**: Applies a function to each element in a container.

Here's an example of using `std::sort` and `std::find`:

```cpp
#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> numbers = {5, 2, 8, 1, 9};

    // Sorting the vector
    std::sort(numbers.begin(), numbers.end());

    // Printing the sorted vector
    for (int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Searching for an element
    auto it = std::find(numbers.begin(), numbers.end(), 8);
    if (it != numbers.end()) {
        std::cout << "Found 8 at index " << std::distance(numbers.begin(), it) << std::endl;
    } else {
        std::cout << "8 not found in the vector" << std::endl;
    }

    return 0;
}
```

## Iterators

Iterators are objects that provide a way to access and manipulate the elements of a container. They act as a generalization of pointers, allowing you to write code that works with different container types without needing to know the underlying implementation details.

Here's an example of using iterators with `std::vector`:

```cpp
#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5};

    // Iterating through the vector using iterators
    for (std::vector<int>::iterator it = numbers.begin(); it != numbers.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    // Modifying elements using iterators
    for (std::vector<int>::iterator it = numbers.begin(); it != numbers.end(); ++it) {
        *it *= 2;
    }

    // Printing the modified vector
    for (int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
```

In the next chapter, we'll explore more advanced C++ topics, such as move semantics and smart pointers.