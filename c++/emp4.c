#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct department {
    char departname[50];
    char location[50];
};

struct employee {
    int id;
    char name[50];
    struct department *dept;
};

int main() {
    // Allocate memory for 5 employees
    struct employee emp[5];

    // Manually allocate memory for each department
    for (int i = 0; i < 5; i++) {
        emp[i].dept = (struct department*)malloc(sizeof(struct department));
        if (emp[i].dept == NULL) {
            printf("Memory allocation failed for department %d\n", i + 1);
            return 1;
        }
    }

    
    emp[0] = (struct employee){1, "Pulkita", emp[0].dept};
    strcpy(emp[0].dept->departname, "CSE");
    strcpy(emp[0].dept->location, "Raipur");

    emp[1] = (struct employee){2, "Shreyansh", emp[1].dept};
    strcpy(emp[1].dept->departname, "ECE");
    strcpy(emp[1].dept->location, "Raipur");

    emp[2] = (struct employee){3, "Krishna", emp[2].dept};
    strcpy(emp[2].dept->departname, "MECH");
    strcpy(emp[2].dept->location, "Raipur");

    emp[3] = (struct employee){4, "Akshita", emp[3].dept};
    strcpy(emp[3].dept->departname, "CIVIL");
    strcpy(emp[3].dept->location, "Raipur");

    emp[4] = (struct employee){5, "Tanmay", emp[4].dept};
    strcpy(emp[4].dept->departname, "IT");
    strcpy(emp[4].dept->location, "Raipur");

    // Display employee details
    printf("\nEmployee Details:\n");
    for (int i = 0; i < 5; i++) {
        printf("\nEmployee %d:\n", i + 1);
        printf("ID: %d\n", emp[i].id);
        printf("Name: %s\n", emp[i].name);
        printf("Department Name: %s\n", emp[i].dept->departname);
        printf("Location: %s\n", emp[i].dept->location);
    }


    for (int i = 0; i < 5; i++) {
        free(emp[i].dept);
    }

    return 0;
}
