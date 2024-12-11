#include<stdio.h>
#include<conio.h>
void main ()
{
int start=10;
int end=30;
clrscr();
printf("\nNumbers from %d to %d,skipping multiples of 3 are:",start,end);
for(int i=start;i<=end;i++)
{
if(i%3==0)
{
continue;
}
printf("\n%d",i);
}
getch();
}