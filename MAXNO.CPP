#include<stdio.h>
#include<conio.h>
void main ()
{
int a,b,c;
clrscr();
printf("Enter a number:");
scanf("%d" "%d" "%d" ,&a,&b,&c);
if (a>b)
{
if (a>c)
{
printf("%d is max\n",a);
}
else
{
printf("%d is max\n",c);
}
}
else
{
if (b>c)
{
printf("%d is max\n",b);
}
else
{
printf("%d is max\n",c);
}
}
getch();
}
