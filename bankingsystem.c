#include <stdio.h>

float balance = 0;

void deposit() {
    float amount;
    printf("Enter amount to deposit: ");
    scanf("%f", &amount);
    if (amount > 0) {
        balance += amount;
        printf("Deposited successfully!\n");
    } else {
        printf("Invalid amount!\n");
    }
}

void withdraw() {
    float amount;
    printf("Enter amount to withdraw: ");
    scanf("%f", &amount);
    if (amount > 0 && amount <= balance) {
        balance -= amount;
        printf("Withdrawn successfully!\n");
    } else {
        printf("Invalid amount or insufficient balance!\n");
    }
}

void checkBalance() {
    printf("Current Balance: %.2f\n", balance);
}

int main() {
    int choice;
    while (1) {
        printf("\nBanking System\n");
        printf("1. Deposit Money\n");
        printf("2. Withdraw Money\n");
        printf("3. Check Balance\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                deposit();
                break;
            case 2:
                withdraw();
                break;
            case 3:
                checkBalance();
                break;
            case 4:
                printf("Thank you for using our banking system!\n");
                return 0;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
}
