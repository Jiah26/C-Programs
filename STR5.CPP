#include<stdio.h>
#include<conio.h>
struct emp
{
char name[100];
int rn,p;
}a[3];
void main()
{
int i;
clrscr();
for(i=0;i<3;i++)
{
printf("Enter name:");
scanf("%s",a[i].name);
printf("Id No.:");
scanf("%d",&a[i].rn);
printf("Salary:");
scanf("%d",&a[i].p);
}
printf("Total salary is $%d",a[0].p+a[1].p,a[2].p);
getch();
}