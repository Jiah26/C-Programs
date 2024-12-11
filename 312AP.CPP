#include<stdio.h>
#include<conio.h>
void main ()
{
int n;
clrscr();
printf("Enter a number:");
scanf("%d",&n);
int a=3;
for (int i=1;i<=n;i++)
{
printf("%d  ",a);
a=a*4;
}
getch();
}