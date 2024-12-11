#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int marks[4];
{
printf("\nEnter marks of physics:");
scanf("%d",&marks[0]);
printf("\nEnter marks of chemistry:");
scanf("%d",&marks[1]);
printf("\nEnter marks of math:");
scanf("%d",&marks[2]);
printf("\nEnter marks of hindi:");
scanf("%d",&marks[3]);
printf("phy=%d,chem=%d,math=%d,hindi=%d",marks[0],marks[1],marks[2],marks[3]);
}
getch();
}