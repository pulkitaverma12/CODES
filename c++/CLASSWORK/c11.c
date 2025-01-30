#include<stdio.h>
void main()
{
float celsius,fahrenheit;
printf("Enter the temperature in celsius: ");
scanf("%f",&celsius);
fahrenheit=(celsius*9/5)+32;
printf("%.2f celsius=%.2f fahrenheit",celsius,fahrenheit);
}