#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
int main()
{
    struct node *head= NULL;
    head = (struct node*)malloc(sizeof(struct node));
    head->data =12;
    head->next =NULL;
    printf("%d\n",head->data);

    struct node *current = (struct node*)malloc(sizeof(struct node));
    current->data =11;
    current->next = NULL;
    head->next =current;
    printf("%d\n",current->data);

    current =(struct node*)malloc(sizeof(struct node));
    current->data=67;
    current->next=NULL;
    head->next->next = current;
    printf("%d\n",current->data);
    
    free(head);
    free(current);
    return 0;
}
