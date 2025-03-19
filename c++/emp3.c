// Create a structure Department with members deptName and location
//  and a structure Employee with members id, name, and a pointer to a Department.
//   Use pointers to dynamically allocate memory for one employee and their department. 
//   Prompt the user to input the employee’s ID, name, department name, and location, 
//   then display the employee’s details along with their department information.
#include<stdio.h>
#include<stdlib.h>
struct department
{
    char departname[50];
    char location[50];
};
struct employee
{
    int id;
    char name[50];
    struct department *dept;
};
int main()
{
    struct employee *emp=(struct employee*)malloc(sizeof(struct employee));
    if(emp==NULL)
    {
        printf("memory allocation is failed");
        return 1;
    }
    emp->dept = (struct department*)malloc(sizeof(struct department));

    if(emp->dept==NULL)
    {
        printf("memory allocation is failed");
        free(emp);
        return 1;
    }

    printf("id:");
    scanf("%d",&emp->id);
    printf("name: ");
    scanf("%s",emp->name);
    printf("department name:");
    scanf("%s",emp->dept->departname);
    printf("location: ");
    scanf("%s",emp->dept->location);

    printf("\nemployee details display:\n");
    printf("id:%d\n",emp->id);
    printf("name:%s\n",emp->name);
    printf("department name:%s\n",emp->dept->departname);
    printf("location:%s\n",emp->dept->location);

    free(emp->dept);
    free(emp);
    return 0;
}
