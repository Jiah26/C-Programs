#include<stdio.h>
#include<conio.h>
void multiply(float a,float b);
void sub(float x,float y);
void main()
{
float a,b,x,y;
clrscr();
printf("\nEnter two numbers for multiplication:");
scanf("%f %f",&a,&b);
multiply(a,b);
printf("\nEnter two numbers for subtraction:");
scanf("%f %f",&x,&y);
sub(x,y);
getch();
}
void multiply(float a,float b)
{
printf("\nMultiplication of %.2f and %.2f is %.2f",a,b,(a*b));
}
void sub(float x,float y)
{
printf("\nSubtraction of %.2f and %.2f is %.2f",x,y,(x-y));
}
