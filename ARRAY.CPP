#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int arr[100],size,i,sum=0;
printf("\nEnter size of array");
scanf("%d",&size);
printf("\nEnter the elements of array");
for(i=0;i<size;i++)
scanf("%d",&arr[i]);
for(i=0;i<size;i++)
sum=sum+arr[i];
printf("\nSum of array =%d",sum);
getch();
}