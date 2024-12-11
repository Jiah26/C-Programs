#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,d,e,total,perc;
clrscr();
printf("Enter marks of subject1:");
scanf("%d",&a);
printf("Enter marks of subject2:");
scanf("%d",&b);
printf("Enter marks of subject3:");
scanf("%d",&c);
printf("Enter marks of subject4:");
scanf("%d",&d);
printf("Enter marks of subject5:");
scanf("%d",&e);
total=a+b+c+d+e;
printf("\nTotal marks are %d",total);
perc=(a+b+c+d+e)/5;
printf("\nPercentage=%d",perc);
if(perc>=90)
{
printf("\nGrade A");
}
else if(perc>=80)
{
printf("\nGrade B");
}
else if(perc>=70)
{
printf("\nGrade C");
}
else if(perc>=60)
{
printf("\nGrade D");
}
else if(perc>=50)
{
printf("\nGrade E");
}
else
{
printf("\nGrade F");
}
getch();
}