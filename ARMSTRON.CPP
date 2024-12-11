#include<stdio.h>
#include<conio.h>
void main(){
int n,temp,rem=0,sum=0;
clrscr();
printf("\nEnter a number:");
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
printf("\nThe number is armstrong number.",n);
}
else
{
printf("\nThe number is not an armstrong number.",n);
}
getch();
}