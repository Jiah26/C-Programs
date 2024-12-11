#include<stdio.h>
#include<conio.h>
void main ()
{
char c;
clrscr();
printf("enter a char\n");
scanf("%c",&c);
if (c=='a'|| c=='e'|| c=='i'|| c=='o'|| c=='u')
printf("%c is a vowel",c);
else
printf("%c is not a vowel");
getch();
}