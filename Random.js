// generate a random number between 1 and 100
const secretNumber = Math.floor(Math.random() * 100) + 1;

// prompt the user to guess the number
let guess = Number(prompt("Guess a number between 1 and 100:"));

// keep prompting the user to guess until they guess the correct number
while (guess !== secretNumber) {
  guess = Number(prompt("Incorrect! Guess again:"));
}

// the user guessed the correct number
alert("Congratulations! You guessed the number.");
