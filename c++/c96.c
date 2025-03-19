#include<stdio.h>
#include<stdlib.h>
struct book
{
    char bookname[50];
    float price;
    struct author
    {
        char name[50];
        int age;
    };
};

int main()
{
    int *ptr=(int*)calloc(5,sizeof(int));
    if(ptr==NULL)
    {
        printf("Memory allocation failed!\n");
        return 1;
    }
    struct book book[5]={
        {"love",180,{"pulkita",18}},
        {"hello",328,{"shreyansh",21}},
        {"to the king",281,{"krishna",20}},
        {"queen",180,{"akshita",19}},
        {"lion",328,{"tanmay",20}}
    };


    for(int i=0;i<5;i++)
    {
        printf("book %d:\n",i+1);
        printf("title: %s\n",book[i].bookname);
        printf("price: %.2f\n",book[i].price);
        printf("author name: %s\n",book[i].name);
        printf("author age: %d\n",book[i].age);
    }
    return 0;
}
