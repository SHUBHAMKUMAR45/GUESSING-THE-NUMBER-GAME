#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));
    int secretNumber = rand() % 100 + 1;
    int guess;
    int attempts = 0;
    const int maxAttempts = 10;

    cout << "Welcome to the Number Guessing Game!" << endl;
    cout << "I'm thinking of a number between 1 and 100. Can you guess it in " << maxAttempts << " attempts?" << endl;

    while (attempts < maxAttempts) {
        cout << "Attempts left: " << maxAttempts - attempts << endl;
        cout << "Enter your guess: ";
        cin >> guess;
        attempts++;

        if (guess < secretNumber) {
            cout << "Too low! Try again." << endl;
        } else if (guess > secretNumber) {
            cout << "Too high! Try again." << endl;
        } else {
            cout << "Congratulations! You guessed the number " << secretNumber << " in " << attempts << " attempts." << endl;
            break;
        }
    }

    if (attempts == maxAttempts) {
        cout << "Sorry, you've used up all your attempts. The secret number was " << secretNumber << "." << endl;
    }

    return 0;
}
