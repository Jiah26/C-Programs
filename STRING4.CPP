#include<stdio.h>
#include<conio.h>
struct student
{
char name[100];
int rn,p;
}a[3];
void main()
{
int i,j=0;
clrscr();
for(i=0;i<3;i++)
{
printf("Enter name:");
scanf("%s",a[i].name);
printf("Enter Roll No.");
scanf("%d",&a[i].rn);
printf("Enter Percentage:");
scanf("%d",&a[i].p);
}
for(i=0;i<3;i++)
{
if(a[i].rn==102)
{
j=1;
printf("%s,Roll number %d got %d percentage",a[i].name,a[i].rn,a[i].p);
}
}
if(j==0)
printf("Roll Number not found");
getch();
}