#include<stdio.h>
#include<conio.h>
void main()
{
int n,temp,sum=0,rem=0,f=1;
clrscr();
printf("Enter a number:");
scanf("%d",&n);
temp=n;
while(n!=0)
{
rem=n%10;
for(int i=1;i<=rem;i++)
{
f=f*i;
}
sum=sum+f;
n=n/10;
f=1;
}
if(temp==sum)
{
printf("\nIt is a krishnamurthy number.");
}
else
{
printf("\nIt is not a krishnamurthy number.");
}
getch();
}
