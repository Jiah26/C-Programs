#include<stdio.h>
#include<conio.h>
int add(void);  //global declaration
void main()
{
int result;
clrscr();
result=add();  //function call
printf("The sum is %d",result);
getch();
}
int add()  //definition
{
int a,b,c;
printf("Enter two numbers:");
scanf("%d%d",&a,&b);
c=a+b;
return c;
}