#include<stdio.h>
#include<conio.h>
void swap();
void main()
{
clrscr();
swap();
getch();
}
void swap()
{
int a=10,b=19,c=0;
printf("\nNumbers before swapping are %d and %d",a,b);
c=a;
a=b;
b=c;
printf("\nNumbers after swapping are %d and %d",a,b);
}