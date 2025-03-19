#include <stdio.h>
#include <stdlib.h>

struct ssipmt {
    int age;
    char name[50];
    char clgname[100];
    float weight;
};

int main() {
    struct ssipmt clg[10]; 
    struct ssipmt *agresita = clg;  


    for (int i = 0; i < 10; i++) {
        printf("SSIPMT %d:\n", i + 1);
        
        printf("Age: ");
        scanf("%d", &agresita[i].age);
        
        printf("Name: ");
        scanf("%s", agresita[i].name);
        
        printf("Weight: ");
        scanf("%f", &agresita[i].weight);
        
        printf("College Name: ");
        scanf("%s", agresita[i].clgname);

    }

    // Displaying the details
    printf("Participant Details\n");
    for (int i = 0; i < 10; i++) {
        printf("\nSSIPMT %d:\n", i + 1);
        printf("Age: %d\n", agresita[i].age);
        printf("Name: %s\n", agresita[i].name);
        printf("Weight: %.2f kg\n", agresita[i].weight);
        printf("College Name: %s\n", agresita[i].clgname);
    }

    return 0;
}
