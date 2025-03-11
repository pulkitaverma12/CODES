#include <stdio.h>

struct student {
    int roll_no;
    char name[50];
    char country[50];
    int marks;
};

int main() {
    struct student students[] = {
        {1, "Priyal", "India", 123},
        {2, "Krishna", "India", 124},
        {3, "Akshita", "India", 125},
        {4, "John", "USA", 130} ,
        {5,"shreyansh","india",135},
        {6,"tanmay","india",137},
        {7,"yashwant","india",156},
        {8,"shashank","india",178},
        {9,"piyush","inida",146}, 
        {10,"karsh","india",167}
    };

    int roll, found = 0;
    struct student *ptr=students;
    printf("Enter roll number: ");
    scanf("%d", &roll);

    for (int i = 0; i < sizeof(students) / sizeof(students[0]); i++) {
        if (ptr->roll_no==roll) {
            printf("\nStudent details:\n");
            printf("Roll No: %d\n", ptr->roll_no);
            printf("Name: %s\n", ptr->name);
            printf("Country: %s\n", ptr->country);
            printf("Marks: %d\n", ptr->marks);
            found = 1;          //not found statement print na ho isliye
            break;
        }
        ptr++;
    }
    if (!found) {
        printf("Student with roll number %d not found.\n", roll);
    }
    return 0;
}
