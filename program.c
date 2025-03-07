#include <stdio.h>

int main() {
    long result1 = 1, result2 = 1, res;
    int n, i, rep;

    printf("\nNumber of letters to scramble: ");
    scanf("%d", &n);
    
    printf("How many repeats: ");
    scanf("%d", &rep);
    for (i = n; i >= 1; i--) {
        result1 *= i;
    }
    for (i = rep; i >= 1; i--) {
        result2 *= i;
    }
    res = result1 / result2;
    printf("\nThe number of possible scrambles: %ld\n", res);
    return 0;
}
