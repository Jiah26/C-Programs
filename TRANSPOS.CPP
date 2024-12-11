#include<stdio.h>
#include<conio.h>
void main()
{
int A[3][3];
int i,j;
clrscr();
printf("\nEnter values for matrix A[3][3]");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("\nEnter number from user for A[%d][%d]:",i,j);
scanf("%d",&A[i][j]);
}
}
printf("\nTranspose of the matrix is:\n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf(" %d ",A[j][i]);
}
printf("\n");
}
getch();
}