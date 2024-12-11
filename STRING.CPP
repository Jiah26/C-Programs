#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char a[50],b[50];
clrscr();
printf("Text:");
gets(a);
printf("Length is %d",strlen(a));
printf("\nUppercase:%s",strupr(a));
printf("\nAfter copying:%s",strcpy(b,a));
getch();
}