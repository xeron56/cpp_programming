#include <iostream>

// Functions
int addNumbers(int a, int b) {
    int sum = a + b;
    return sum;
}

void printMessage(std::string message) {
    std::cout << message << std::endl;
}

int main() {
    // Loops
    // for loop
    for (int i = 0; i < 5; i++) {
        std::cout << "Iteration " << i << std::endl;
    }

    // while loop
    int count = 0;
    while (count < 3) {
        std::cout << "Count: " << count << std::endl;
        count++;
    }

    // do-while loop
    int num = 0;
    do {
        std::cout << "Number: " << num << std::endl;
        num++;
    } while (num < 3);

    // Functions
    int result = addNumbers(5, 3);
    std::cout << "The sum is: " << result << std::endl;

    printMessage("Hello, world!");

    return 0;
}