#include <stdio.h>
#include <stdlib.h>

struct student {
    char name[50];
    int roll_no;
};

int main() {
    struct student *students[3];
    
    for (int i = 0; i < 3; i++) {
        students[i] = (struct student *)malloc(sizeof(struct student));
        if (students[i] == NULL) {
            printf("Memory allocation failed!\n");
            return 1;
        }

        printf("Enter details for Student %d:\n", i + 1);
        printf("Roll number: ");
        scanf("%d", &students[i]->roll_no);
        printf("Name: ");
        scanf("%s", students[i]->name);
    }

    printf("\nStudent Details (Reverse Order):\n");
    for (int i = 2; i >= 0; i--) {
        printf("Roll Number: %d\n", students[i]->roll_no);
        printf("Name: %s\n", students[i]->name);
    }

    for (int i = 0; i < 3; i++) {
        free(students[i]);
    }
    
    return 0;
}
