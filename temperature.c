#include <stdio.h>

int main() {
    int temp, mode;

    // Taking user input
    printf("Enter the temperature: ");
    scanf("%d", &temp);

    printf("Enter the mode (0 for Normal, 1 for Critical): ");
    scanf("%d", &mode);

    if (mode == 0) {  // Normal Mode
        if (temp < 0 || temp > 40) {
            printf("Warning!\n");
        } else {
            printf("Normal mode\n");
        }
    } 
    else if (mode == 1) {  // Critical Mode
        if (temp < 5 || temp > 38) {  // Emergency has higher priority
            printf("Emergency mode!\n");
        }
        else if (temp < 10 || temp > 35) {  // Warning
            printf("Warning mode!\n");
        }
        else {
            printf("Critical mode\n");
        }
    } 
    else {
        printf("Invalid mode.\n");
    }

    return 0;
}
