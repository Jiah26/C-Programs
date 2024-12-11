#include<stdio.h>
#include<conio.h>
struct student
{
char studentname[50];
int roll;
float total;
float marks1;
float marks2;
};
struct student input()
{
struct student b;
printf("Enter student name,roll no and marks of two subjects:");
gets(b.studentname);
scanf("%d",&b.roll);
scanf("%f",&b.marks1);
scanf("%f",&b.marks2);
return (b);
}
void display(struct student b)
{
printf("\nStudent name is %s",b.studentname);
printf("\nRoll Number is %d",b.roll);
printf("\nMarks of two subject is %f and %f",b.marks1,b.marks2);
printf("\nTotal is %f",b.total);
}
void main()
{
struct student b1;
clrscr();
b1=input();
display(b1);
getch();
}