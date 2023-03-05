#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

int main() {
    // Prompt the user to enter a sequence of strings
    std::cout << "Enter a sequence of strings: " << std::endl;

    // Read in each string and store them in a vector
    std::vector<std::string> strings;
    std::string input;
    while (std::cin >> input) {
        strings.push_back(input);
    }

    // Sort the strings in alphabetical order
    std::sort(strings.begin(), strings.end());

    // Print the sorted strings
    std::cout << "Sorted strings:" << std::endl;
    for (const auto& str : strings) {
        std::cout << str << std::endl;
    }

    return 0;
}
