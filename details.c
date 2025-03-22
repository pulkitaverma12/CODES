#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct employee
{
    int id;
    char name[50];
    int shifthours;

};
int main()
{
    struct employee emp[3];
    struct employee *ptr=emp;
    struct employee *emp=(struct employee*)calloc(3,sizeof(struct employee));
    if(emp == NULL)
    {
        printf("memory allocation is failed");
        return 1;
    }
    for(int i=0;i<3;i++)
    {
        printf("id:");
        scanf("%d",&ptr[i].id);
        printf("name: ");
        scanf("%s",ptr[i].name);
        printf("shifthours: ");
        scanf("%d",&ptr[i].shifthours);
    }
    for(int i=0;i<3;i++)
    {
        printf("display details: ",i++);
        printf("id:%d\n",ptr[i].id);
        printf("name:%s\n",ptr[i].name);
        printf("shifthours:%d\n",ptr[i].shifthours);
    }
    free(emp);
    return 0;
}
