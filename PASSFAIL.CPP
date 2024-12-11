#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int marks;
printf("Enter marks:");
scanf("%d", &marks);
if (marks>=90)
printf("10 pointer");
else if (marks>=80 && marks<90)
printf("9 pointer");
else if (marks>=60 && marks<80)
printf("8 pointer");
else if (marks<60)
printf("fail");
getch();
}


