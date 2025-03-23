#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *link;
};
int main()
{
    struct node *head=NULL;
    head = (struct node*)malloc(sizeof(struct node));

    if(head==NULL)
    {
        printf("memory allocation is failed");
        return 1;
    }

    head->data =12;
    head ->link =NULL;

    printf("%d",head->data);
    free(head);
    return 0;
}
