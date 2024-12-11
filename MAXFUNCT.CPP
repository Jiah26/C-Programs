#include<stdio.h>
#include<conio.h>
int max(int x,int y)
{
if(x>y)
{
return x;
}
else
{
return y;
}
}
void main()
{
int a,b;
clrscr();
printf("\nEnter two numbers:");
scanf("%d%d",&a,&b);
int maximum=max(a,b);
printf("\nThe maximum number is %d",maximum);
getch();
}
