#include<stdio.h>
#include<conio.h>
void main()
{
int n,temp,rem=0,sum=0,base=1;
clrscr();
printf("Enter a number:");
scanf("%d",&n);
while(n!=0)
{
rem=n%2;
sum=(rem*base)+sum;
n=n/2;
base=base*10;
}
printf("%d ",sum);
getch();
}