#include<stdio.h>
#include<conio.h>
void main ()
{
float a,b;
clrscr();
{
printf("Enter two numbers:");
scanf("%f %f",&a,&b);
printf("\n %.2f is addition",(a+b));
printf("\n %.2f is multiplication",(a*b));
printf("\n %.2f is subtraction",(a-b));
printf("\n %.2f is division",(a/b));
}
getch();
}