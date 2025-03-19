#include <stdio.h>
#include <stdlib.h>

struct employee {
    int id;
    char name[50];
    struct employee *next;
};

int main() {
    struct employee *head = NULL, *temp = NULL, *newnode = NULL;

    for (int i = 0; i < 3; i++) {
        newnode = (struct employee *)malloc(sizeof(struct employee));

        if (newnode == NULL) {  // Fixed NULL check
            printf("Memory allocation failed!\n");
            return 1;
        }

        // Input employee details
        printf("\nEnter the details of Employee %d:\n", i + 1);
        printf("ID: ");
        scanf("%d", &newnode->id);
        printf("Name: ");
        scanf("%S", newnode->name);  

        newnode->next = NULL;  

        // Link nodes
        if (head == NULL) {
            head = newnode;
        } else {
            temp->next = newnode;
        }
        temp = newnode;
    }

    // Display Employee Details
    printf("\nEmployee Details:\n");
    temp = head;
    while (temp != NULL) {
        printf("ID: %d\n", temp->id);
        printf("Name: %s\n", temp->name);
        temp = temp->next;
    }

    // Free allocated memory
    temp = head;
    while (temp != NULL) {
        struct employee *toFree = temp;
        temp = temp->next;
        free(toFree);
    }
    return 0;
}
