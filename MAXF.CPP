#include<stdio.h>
#include<conio.h>
int max(int i,int j);
void main(){
int i,j,maximum;
clrscr();
printf("\nEnter two numbers:");
scanf("%d %d",&i,&j);
maximum=max(i,j);
printf("\nMaximum number is %d",maximum);
getch();
}
int max(int i,int j)
{
if(i>j)
{
return i;
}
else
{
return j;
}
}