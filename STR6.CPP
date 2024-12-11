#include<stdio.h>
#include<conio.h>
union book
{
char name[100],a[50];
int p;
}b;
void main()
{
clrscr();
printf("Enter book name:");
scanf("%s",b.name);
printf("Book name is %s",b.name);
printf("\nAuthor name:");
scanf("%s",b.a);
printf("Author name is %s",b.a);
printf("\nPrice:");
scanf("%d",&b.p);
printf("Price is %d",b.p);
getch();
}