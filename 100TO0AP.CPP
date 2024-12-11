#include<stdio.h>
#include<conio.h>
void main ()
{
int n;
clrscr();
printf("Enter a number:");
scanf("%d",&n);
int a=100;
for (int i=n;i>0;i--)
{
printf("%d  ",a);
a=a-3;
}
getch();
}