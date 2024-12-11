#include<stdio.h>
#include<conio.h>
void palin(int num);
int main()
{
int number;
clrscr();
printf("Enter a number:");
scanf("%d",&number);
palin(number);
getch();
return 0;
}
void palin(int num)
{
int a=num,rev=0,rem;
while(num!=0)
{
rem=num%10;
rev=(rev*10)+rem;
num=num/10;
}
if(a==rev)
{
printf("\n%d is a palindrome number.",a);
}
else
{
printf("\n%d is not a palindrome number.",a);
}
}