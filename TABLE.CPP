#include<stdio.h>
#include<conio.h>
void main()
{
int num,i=1;
clrscr();
printf("\nEnter the table to be generated:");
scanf("%d",&num);
do
{
printf("\n%d*%d=%d",num,i,num*i);
i++;
}
while(i<=10);
getch();
}
