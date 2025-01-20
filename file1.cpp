
#include <iostream>
#include <fstream>
#include <string>

int main() {
    

    std::ifstream file("example.txt");
    if (!file) {
        std::cerr << "Error opening file!" << std::endl;
        return 1;
    }
    std::string line, word;
    int wordCount = 0;
    while (std::getline(file, line)) {
        std::istringstream iss(line);
        while (iss >> word) {
            ++wordCount;
        }
    }
    file.close();
    std::cout << "Number of words in the file: " << wordCount << std::endl;
 

    return 0;
}
