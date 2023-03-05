#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
    // seed the random number generator with the current time
    std::srand(std::time(nullptr));

    // generate a random number between 1 and 100
    int secret_number = std::rand() % 100 + 1;

    // prompt the user to guess the number
    std::cout << "Guess a number between 1 and 100: ";
    int guess;
    std::cin >> guess;

    // keep prompting the user to guess until they guess the correct number
    while (guess != secret_number) {
        std::cout << "Incorrect! Guess again: ";
        std::cin >> guess;
    }

    // the user guessed the correct number
    std::cout << "Congratulations! You guessed the number.\n";

    return 0;
}
