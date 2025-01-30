#include<stdio.h>
void main()
{
    int week;
    printf("enter the week number(1-7): ");
    scanf("%d",&week);
    if(week==1)
    {
        printf("monday %d",week);
    }
    else if(week==2)
    {
        printf("tuesday %d",week);
    }
    else if(week==3)
    {
        printf("wednesday %d",week);
    }
    else if(week==4){
        printf("thrusday %d",week);
    }
    else if(week==5)
    {
        printf("friday %d",week);
    }
    else if(week==6)
    {
        printf("saturday %d",week);
    }
    else
    {
       printf("sunday %d",week); 
    }
}