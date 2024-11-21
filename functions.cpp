/*#include <iostream>
#include <cstdlib>
#include <ctime>
#include <limits> // For numeric_limits

using namespace std;

// Function to generate a random number within a range
int generateRandomNumber(int min, int max) {
    srand(time(0)); // Seed the random number generator
    return rand() % (max - min + 1) + min;
}

// Function to get a valid guess from the user
int getUserGuess() {
    int guess;
    while (true) {
        cout << "Enter your guess: ";
        cin >> guess;

        // Check if the input is valid
        if (cin.fail()) {
            cin.clear(); // Clear the error flag
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Ignore invalid input
            cout << "Invalid input. Please enter a valid number." << endl;
        } else {
            return guess; // Valid input, return the guess
        }
    }
}

// Function to check the guess and provide feedback
void checkGuess(int guess, int secretNumber) {
    if (guess == secretNumber) {
        cout << "Congratulations! You guessed the correct number." << endl;
    } else if (guess < secretNumber) {
        cout << "Your guess is too low." << endl;
    } else {
        cout << "Your guess is too high." << endl;
    }
}

int main() {
    int secretNumber = generateRandomNumber(1, 100);
    int guess;
    int attempts = 0;

    cout << "Welcome to the Number Guessing Game!" << endl;

    do {
        guess = getUserGuess();
        attempts++;
        checkGuess(guess, secretNumber);
    } while (guess != secretNumber);

    cout << "You guessed the number in " << attempts << " attempts." << endl;

    return 0;
}*/

//Global variable

#include <iostream>
using namespace std;

int age=27;
void greeting(){
    cout<<"Greeting users...."<<endl;
    cout<<"Greeting: My age is: ...."<<age<<endl;
    age=28;
}

int main(){

    greeting();    
    cout<<"main: My age is: ...."<<age<<endl;

    return 0;
}
