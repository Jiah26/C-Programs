#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char a[50],b[50];
clrscr();
printf("s1:");
gets(a);
printf("s2:");
gets(b);
if(strcmp(a,b)==0)
printf("They are equal.");
else
printf("They are not equal.");
getch();
}