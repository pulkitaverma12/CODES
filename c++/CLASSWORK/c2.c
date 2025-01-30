#include<stdio.h>
int main()
{
   int radius;
   float pi=3.14;
   float area,circumference;
   printf("Enter the radius of the circle: ");
   scanf("%d ",&radius);
   area=(pi*radius*radius);
   printf("the area of circle is : %f",area);
   circumference=2*pi*radius;
   printf("\n circumference of circle is: %f",circumference);
   return 0;
}