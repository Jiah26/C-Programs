#include<stdio.h>
#include<conio.h>
void main()
{
int n,temp,sum=0,rem=0;
clrscr();
printf("Enter a number:");
scanf("%d",&n);
temp=n;
while(n!=0)
{
rem=n%10;
sum=sum+(rem*rem*rem);
n=n/10;
}
if(temp==sum)
{
printf("The number is a armstrong number.");
}
else
{
printf("THe number is not an armstrong number.");
}
getch();
}
