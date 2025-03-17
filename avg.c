#include <stdio.h>
#include <stdlib.h>

struct student {
    char name[50];
    int roll;
    int *grades;
};

int main() {
    struct student *student = (struct student *)malloc(sizeof(struct student));
    if (student == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }
    
    student->grades = (int *)malloc(3 * sizeof(int));
    if (student->grades == NULL) {
        printf("Memory allocation failed for grades!\n");
        free(student);
        return 1;
    }
    
    printf("Enter Roll Number: ");
    scanf("%d", &student->roll);
    printf("Enter Name: ");
    scanf("%s", student->name);
    
    printf("Enter 3 Grades: ");
    for (int i = 0; i < 3; i++) {
        scanf("%d", &student->grades[i]);
    }
    
    float sum = 0;
    for (int i = 0; i < 3; i++) {
        sum += student->grades[i];
    }
    float average = sum / 3;
    
    printf("\nStudent Details:\n");
    printf("Roll Number: %d\n", student->roll);
    printf("Name: %s\n", student->name);
    printf("Grades: %d %d %d\n", student->grades[0], student->grades[1], student->grades[2]);
    printf("Average: %.2f\n", average);
    
    free(student->grades);
    free(student);
    return 0;
}
