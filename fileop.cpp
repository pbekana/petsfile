
#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::ifstream file("example.txt"); // Open the file
    if (!file.is_open()) {
        std::cerr << "Error opening file!" << std::endl;
        return 1;
    }

    std::string line;
    int lineCount = 0;

    while (std::getline(file, line)) {
        ++lineCount; // Increment the line count for each line read
    }

    file.close(); // Close the file

    std::cout << "Number of lines in the file: " << lineCount << std::endl;

    return 0;
}
