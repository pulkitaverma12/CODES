#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void displayLetters() {
    cout << "Available letters: (A to Z)\n";
    cout << "Let's Start!\n";
}

char getRandomLetter() {
    return 'P';  
}

void playGame() {
    char userLetter;
    char myLetter = getRandomLetter();  

    cout << "\n* Guess the letter in my mind *\n";
    displayLetters();

    int attempts = 3;
    bool win = false;  

    while (attempts > 0) { 
        cout << "Enter your guess (A-Z): ";
        cin >> userLetter;
        userLetter = toupper(userLetter);  // Convert input to uppercase for consistency

        if (userLetter < 'A' || userLetter > 'Z') {
            cout << " Invalid input! Please enter a letter between A and Z.\n";
            continue;  // Restart the loop if input is invalid
        }

        if (userLetter == myLetter) {
            cout << " You win! You guessed the correct letter: " << myLetter << "\n";
            win = true;
            break;
        } else {
            cout << " Wrong guess! Try again.\n";
            attempts--;
            if (attempts > 0) {
                cout << "Attempts left: " << attempts << "\n";
            }
        }
    }

    if (!win) {
        cout << "You lost! The correct letter was: " << myLetter << "\n";
    }
} 

int main() {
    srand(time(0));  // Seed for randomness
    char playAgain;

    do {
        playGame();
        cout << "Do you want to play again? (y/n): ";
        cin >> playAgain;
        playAgain = tolower(playAgain);
    } while (playAgain == 'y');

    cout << "Thanks for playing! Goodbye. \n";
    return 0;
}
