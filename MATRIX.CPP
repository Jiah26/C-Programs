#include<stdio.h>
#include<conio.h>
void main()
{
int arr[3][3];
int i,j;
int cube;
clrscr();
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("\nEnter the number:");
scanf("%d",&arr[i][j]);
}
printf("\n");
}
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf(" %d ",arr[i][j]*arr[i][j]*arr[i][j]);
}
printf("\n");
}
getch();
}