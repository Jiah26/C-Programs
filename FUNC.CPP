#include<stdio.h>
#include<conio.h>
void rectangle();
void circle();
void main()
{
clrscr();
rectangle();
circle();
getch();
}
void rectangle()
{
int l=10,b=7;
printf("\nArea of rectangle is %d",(l*b));
}
void circle()
{
float pi=3.14,r=5;
printf("\nArea of circle is %.2f",(pi*r*r));
}