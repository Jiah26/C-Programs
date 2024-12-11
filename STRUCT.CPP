#include<stdio.h>
#include<conio.h>
struct book
{
char bookname[50];
char authorname[20];
float price;
};
struct book input()
{
struct book b;
printf("Enter book name,author name and price:");
gets(b.bookname);
gets(b.authorname);
scanf("%f",&b.price);
return (b);
}
void display(struct book b)
{
printf("\n book name is %s.",b.bookname);
printf("\n Author name is %s.",b.authorname);
printf("\n Price is %f.",b.price);
}
void main()
{
struct book b1;
clrscr();
b1=input();
display(b1);
getch();
}