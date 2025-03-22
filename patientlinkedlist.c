#include <stdio.h>
#include <stdlib.h>

struct patient {
    int id;
    char name[50];
    struct patient *next;
};

int main() {
    struct patient *head = NULL, *temp = NULL, *newnode = NULL;

    // Input patient details
    for (int i = 0; i < 2; i++) {
        newnode = (struct patient *)malloc(sizeof(struct patient));
        if (newnode == NULL) {
            printf("Memory allocation failed!\n");
            return 1;
        }

        printf("\nEnter details for Patient %d\n", i + 1);
        printf("ID: ");
        scanf("%d", &newnode->id);
        printf("Name: ");
        scanf(" %49s", newnode->name);  // Using %49s to prevent buffer overflow

        newnode->next = NULL;

        if (head == NULL) {
            head = newnode;
        } else {
            temp->next = newnode;
        }
        temp = newnode; // Move temp to the last node
    }

    // Display patient details
    printf("\nPatient Details:\n");
    temp = head;
    while (temp != NULL) {
        printf("\nID: %d\n", temp->id);
        printf("Name: %s\n", temp->name);
        temp = temp->next;
    }

    // Free allocated memory
    temp = head;
    while (temp != NULL) {
        struct patient *toFree = temp;
        temp = temp->next;
        free(toFree);
    }

    return 0;
}
