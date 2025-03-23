#include<stdio.h>
#include<stdlib.h>
struct data
{
    int data1,data2,data3,data4;
    struct data *next;
};
int main()
{
    struct data *head=NULL;
    head = (struct data*)malloc(sizeof(struct data));
    
    if (head == NULL)
    {   
        printf("Memory allocation failed\n");
        return 1;
    }

    head->data1=2;
    head->data2=4;
    head->data3=6;
    head->data4=8;
    

    head->next =NULL;
    printf("Data: %d\n",head->data1);
    printf("Data: %d\n",head->data2);
    printf("Data: %d\n",head->data3);
    printf("Data: %d\n",head->data4);
    free(head);
    return 0;
}
