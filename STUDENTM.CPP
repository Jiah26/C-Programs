#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int marks[10]={96,99,24,56,78,90,32,45,22,55};
for(int i=0;i<10;i++)
{
if(marks[i]<35)
{
printf("%d ",marks[i]);
}
}
getch();
}