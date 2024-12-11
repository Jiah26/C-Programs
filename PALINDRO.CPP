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
sum=(sum*10)+rem;
n=n/10;
}
if(temp==sum)
{
printf("\nIt is a palindrome");
}
else
{
printf("\nIt is not a palindrome");
}
getch();
}