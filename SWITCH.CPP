#include<stdio.h>
#include<conio.h>
void main()
{
int choice,sum,a,b,n;
clrscr();
printf("Enter your choice:");
scanf("%d",&choice);
switch(choice)
{
case 1:
printf("\nEnter two numbers:");
scanf("%d%d",&a,&b);
sum=a+b;
printf("\nSum is %d",sum);
break;
case 2:
printf("\nEnter a number:");
scanf("%d",&a);
if(a%2==0)
printf("\nNumber is even.");
else
printf("\nNumber is odd.");
break;
case 3:
printf("\nEnter a number:");
scanf("%d",&n);
for(int i=0;i<=n;i++)
printf("%d ",i);
break;
default:
printf("\nInvalid choice.");
}
getch();
}