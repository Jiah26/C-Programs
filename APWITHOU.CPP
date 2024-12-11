#include<stdio.h>
#include<conio.h>
void main ()
{
int n;
clrscr();
printf("Enter a number:");
scanf("%d",&n);
int a=4;
for (int i=1;i<=n;i++)
{
printf("%d ",a);
a=a+3;
}
getch();
}