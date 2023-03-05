#include <iostream>
#include <vector>
#include <limits>  // for numeric_limits

int main() {
    std::vector<int> numbers;  // create a vector to hold the input integers

    // read in integers from user input
    while (true) {
        std::cout << "Enter an integer (or 'done' to finish): ";
        std::string input;
        std::getline(std::cin, input);

        if (input == "done") {
            break;  // exit the loop if user is done entering integers
        }

        try {
            int number = std::stoi(input);  // convert input to integer
            numbers.push_back(number);  // add the input integer to the vector
        } catch (std::invalid_argument&) {  // user entered something that isn't an integer
            std::cout << "Invalid input. Please enter an integer or 'done'." << std::endl;
        }
    }

    if (numbers.empty()) {
        std::cout << "No integers entered." << std::endl;
    } else {
        int largest = std::numeric_limits<int>::min();
        int smallest = std::numeric_limits<int>::max();

        for (int number : numbers) {
            if (number > largest) {
                largest = number;
            }
            if (number < smallest) {
                smallest = number;
            }
        }

        std::cout << "Largest integer: " << largest << std::endl;
        std::cout << "Smallest integer: " << smallest << std::endl;
    }

    return 0;
}
