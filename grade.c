#include <stdio.h>
#include <stdlib.h>

struct subject {
    char subcode[50];
    float grade;
};

struct student {
    int roll;
    char name[50];
    struct subject *subjects;  
};

int main() {
    struct student student;
    int num_subjects = 3;  


    student.subjects = (struct subject *)malloc(num_subjects * sizeof(struct subject));
    printf("Enter the roll: ");
    scanf("%d", &student.roll);
    printf("Enter name: ");
    scanf("%s", student.name);


    for (int i = 0; i < num_subjects; i++) {
        printf("Enter subject %d subcode: ", i + 1);
        scanf("%s", student.subjects[i].subcode);
        printf("Enter grade for %s: ", student.subjects[i].subcode);
        scanf("%f", &student.subjects[i].grade);
    }


    float sum = 0;
    for (int i = 0; i < num_subjects; i++) {
        sum += student.subjects[i].grade;
    }
    float average = sum / num_subjects;

    // Display student details
    printf("\nStudent Details:\n");
    printf("Roll Number: %d\n", student.roll);
    printf("Name: %s\n", student.name);

    printf("Subjects and Grades:\n");
    for (int i = 0; i < num_subjects; i++) {
        printf("Subject: %s, Grade: %.2f\n", student.subjects[i].subcode, student.subjects[i].grade);
    }

    printf("Average Grade: %.2f\n", average);


    free(student.subjects);

    return 0;
}
