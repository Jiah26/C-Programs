#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int a,b;
printf("Enter two numbers:");
scanf("%d %d",&a,&b);
printf("\n\n a==b %d",(a==b));
printf("\n\n a!=b %d",(a!=b));
printf("\n\n a>=b %d",(a>=b));
printf("\n\n a<=b %d",(a<=b));
printf("\n\n a<b %d",(a<b));
getch();
}