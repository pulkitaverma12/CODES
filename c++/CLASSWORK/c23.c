#include<stdio.h>
int main()
{
    int amt;
    int n500=0,n200=0,n100=0,n10=0;
    printf("Enter amount: ");
    scanf("%d",&amt);
    if(amt>=500)
    {
        n500 = amt/500;
        amt -=n500*500;
    }
    if(amt>=200)
    {
        n200 = amt/200;
        amt -=n200*200;
    }
    if(amt>=100)
    {
        n100 = amt/100;
        amt -=n100*100;
    }
    if(amt>=10)
    {
        n100 = amt/10;
        amt -=n10*10;
    }
    printf("Total number of notes=\n");
    printf("500=%d\n",n500);
    printf("200=%d\n",n200);
    printf("100=%d\n",n100);
    printf("10=%d\n",n10);
    return 0;
}