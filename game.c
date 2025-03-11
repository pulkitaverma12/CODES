#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function to generate 4 random numbers between 1 and 9
void generateNumbers(int numbers[]) {
    for (int i = 0; i < 4; i++) {
        numbers[i] = rand() % 10 + 1;
    }
}

// Function to display the numbers
void displayNumbers(int numbers[]) {
    printf("\nUse these numbers to make 24: ");
    for (int i = 0; i < 4; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");
}

// Function to evaluate user input (Basic version, doesn't check correct usage of numbers)
int evaluateExpression() {
    char expression[100];
    int result;

    printf("\nEnter your equation using +, -, *, /: ");
    scanf(" %[^\n]", expression); // Read full line

    // Evaluate the entered expression
    result = system(expression);  // Unsafe method, for a better solution, use expression parsing.

    return result == 24;
}

int main() {
    srand(time(NULL));
    int numbers[4];
    char choice;

    do {
        // Generate and display numbers
        generateNumbers(numbers);
        displayNumbers(numbers);

        // Get user input and evaluate
        if (evaluateExpression()) {
            printf("\n Correct! You made 24!\n");
        } else {
            printf("\n Incorrect! Try Again.\n");
        }

        // Ask if the player wants to continue
        printf("\nPlay again? (y/n): ");
        scanf(" %c", &choice);
    } while (choice == 'y' || choice == 'Y');

    printf("\nThanks for playing!\n");
    return 0;
}
