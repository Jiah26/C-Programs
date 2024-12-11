#include<stdio.h>
#include<conio.h>
void main ()
{
float l,b,area,side,sarea;
clrscr();
{
printf("Enter length and breadth of rectangle:");
scanf("%f %f",&l,&b);
area=l*b;
printf("%f is area",area);
printf("\nEnter side of square:");
scanf("%f",&side);
sarea=side*side;
printf("%f is area of square",sarea);
}
getch();
}