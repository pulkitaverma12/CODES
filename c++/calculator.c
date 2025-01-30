#include<stdio.h>
void main()
{
    char op;
    double first,second;
    printf("enter the operators(+,-,*,%,/):");
    scanf("%c",&op);
    printf("enter the two operand:");
    scanf("%lf%lf",&first,&second);
    switch(op)
    {
        case'+':
        printf("%.llf+%.llf=%.llf",first,second,first+second);
        break;
        case'-':
        printf("%.llf-%.llf=%.llf",first,second,first-second);
        break;
        case'*':
        printf("%.llf*%.llf=%.llf",first,second,first*second);
        break;
        case'/':
        printf("%.llf/%.llf=%.llf",first,second,first/second);
        break;
        default:
        printf("error!");
    }
}