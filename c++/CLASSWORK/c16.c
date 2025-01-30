#include<stdio.h>
void main()
{
    char ch;
    printf("Enter the character: ");
    scanf("%c ",&ch);
    if(ch>='A'&&ch<='z')
    {
      printf("%c is uppercase",ch);
    }   
    else if(ch>='a'&& ch<='z'){
    printf("%c is lowercase",ch);
    }
    else{
    printf("%c is not alphabet");
    }
}