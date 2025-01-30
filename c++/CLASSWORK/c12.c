#include<stdio.h>
int main()
{
int inttype;
float floattype;
long longtype;
double doubletype;
char chartype;
printf("size of int:%zu\n",sizeof(inttype));
printf("size of float:%zu\n",sizeof(floattype));
printf("size of long:%zu\n",sizeof(longtype));
printf("size of char:%zu\n",sizeof(chartype));
return 0;
}