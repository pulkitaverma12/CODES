#include<stdio.h>
struct stud
{
    int age;
    float weight;
};
int main()
{
    struct stud *p,s={10,20};
    p=&s;
    printf("age:%d\n",(*p).age);
    printf("weight:%f\n",p-> weight);
}
