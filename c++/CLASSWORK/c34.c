#include<stdio.h>
#include<string.h>
void main()
{
    char str1[20]="priyal";
    char str2[20]="pulkita";
    char str3[20]="ranu";
    printf("%d ",strcmp(str2,str3));
    printf("%d ",strcmp(str1,str2));
    printf("%d ",strcmp(str3,str2));
    printf("%d ",strcmp(str2,str1));
    printf("%d ",strcmp(str3,str3));
}