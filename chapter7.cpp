#include <iostream>
#include <fstream>
#include <string>

int main() {
    // Reading from a file
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

    // Writing to a file
    std::ofstream outputFile("output.txt", std::ios::out | std::ios::app);

    if (outputFile.is_open()) {
        outputFile << "Hello, world!" << std::endl;
        outputFile << "This is a test file." << std::endl;
        outputFile.close();
    } else {
        std::cout << "Unable to open file" << std::endl;
    }

    // File positioning
    std::ifstream positionFile("example.txt");

    if (positionFile.is_open()) {
        std::string line;
        std::getline(positionFile, line);
        std::cout << "First line: " << line << std::endl;

        positionFile.seekg(0, std::ios::beg);
        std::cout << "Current position: " << positionFile.tellg() << std::endl;

        std::getline(positionFile, line);
        std::cout << "First line again: " << line << std::endl;

        positionFile.close();
    } else {
        std::cout << "Unable to open file" << std::endl;
    }

    // File modes
    std::fstream modeFile("mode.txt", std::ios::in | std::ios::out | std::ios::trunc);

    if (modeFile.is_open()) {
        modeFile << "This file will be truncated." << std::endl;
        modeFile.seekg(0, std::ios::beg);
        std::string line;
        std::getline(modeFile, line);
        std::cout << "File content: " << line << std::endl;
        modeFile.close();
    } else {
        std::cout << "Unable to open file" << std::endl;
    }

    return 0;
}