#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    // Initialize vector to hold numbers
    std::vector<int> numbers;
    
    // Read in numbers until user enters a non-integer
    int num;
    while (std::cin >> num) {
        numbers.push_back(num);
    }
    
    // Sort the vector to group duplicates together
    std::sort(numbers.begin(), numbers.end());
    
    // Use unique() function to remove duplicates
    auto last = std::unique(numbers.begin(), numbers.end());
    numbers.erase(last, numbers.end());
    
    // Print the result
    for (int n : numbers) {
        std::cout << n << " ";
    }
    std::cout << std::endl;
    
    return 0;
}
