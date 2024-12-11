#include<stdio.h>
#include<conio.h>
void main()
{
float arr[5],sum=0;
clrscr();
printf("\nEnter array elements:");
for (int i=0;i<5;i++)
scanf("%f",&arr[i]);
for(i=0;i<5;i++)
sum=sum+arr[i];
float avg=0;
for(i=0;i<5;i++)
avg=sum/arr[i];
printf("\nSum of array is: %.2f",sum);
printf("\nAverage of array is: %.2f",avg);
getch();
}