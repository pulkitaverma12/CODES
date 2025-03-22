#include <stdio.h>
#include <stdlib.h>

struct data {
    int data;
    struct data *next;
};

int main() {
    struct data *head = NULL, *temp = NULL, *newnode = NULL;


    int values[] = {2, 4, 6, 8}; 
    for (int i = 0; i < 4; i++) {
        newnode = (struct data*)malloc(sizeof(struct data));
        if (newnode == NULL) {
            printf("Memory allocation failed!\n");
            return 1;
        }
        newnode->data = values[i];
        newnode->next = NULL;

        if (head == NULL) {  
            head = newnode;
            temp = newnode;
        } else {  
            temp->next = newnode;
            temp = newnode;
        }
    }

    printf("\nData details:\n");
    temp = head; 
    while (temp != NULL) {
        printf("Data: %d\n", temp->data);
        temp = temp->next;
    }

    temp = head;
    while (temp != NULL) {
        struct data *toFree = temp;
        temp = temp->next;
        free(toFree);
    }

    return 0;
}
