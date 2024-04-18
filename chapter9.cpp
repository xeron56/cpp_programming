#include <iostream>
#include <vector>
#include <list>
#include <map>
#include <set>
#include <algorithm>
#include <numeric>

int main() {
    // Containers
    // std::vector
    std::vector<int> numbers = {1, 2, 3, 4, 5};
    std::cout << "First element: " << numbers[0] << std::endl;
    std::cout << "Last element: " << numbers.back() << std::endl;

    for (int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    numbers.push_back(6);
    numbers.pop_back();

    // std::list
    std::list<std::string> words = {"apple", "banana", "cherry"};
    for (const std::string& word : words) {
        std::cout << word << " ";
    }
    std::cout << std::endl;

    // std::map
    std::map<std::string, int> grades = {{"Alice", 90}, {"Bob", 85}, {"Charlie", 92}};
    grades["David"] = 88;
    for (const auto& [name, score] : grades) {
        std::cout << name << ": " << score << std::endl;
    }

    // std::set
    std::set<int> uniqueNumbers = {3, 1, 4, 1, 5, 9, 2};
    for (int num : uniqueNumbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Algorithms
    // std::sort
    std::sort(numbers.begin(), numbers.end());
    for (int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // std::find
    auto it = std::find(numbers.begin(), numbers.end(), 4);
    if (it != numbers.end()) {
        std::cout << "Found 4 at index " << std::distance(numbers.begin(), it) << std::endl;
    } else {
        std::cout << "4 not found in the vector" << std::endl;
    }

    // std::accumulate
    int sum = std::accumulate(numbers.begin(), numbers.end(), 0);
    std::cout << "Sum of numbers: " << sum << std::endl;

    // std::transform
    std::vector<int> doubledNumbers(numbers.size());
    std::transform(numbers.begin(), numbers.end(), doubledNumbers.begin(), [](int x) { return x * 2; });
    for (int num : doubledNumbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Iterators
    std::vector<int>::iterator vit = numbers.begin();
    while (vit != numbers.end()) {
        std::cout << *vit << " ";
        ++vit;
    }
    std::cout << std::endl;

    return 0;
}