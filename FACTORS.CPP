#include<stdio.h>
#include<conio.h>
void main(){
int n;
clrscr();
printf("\nEnter a number:");
scanf("%d",&n);
for(int i=1;i<=n;i++)
{
if(n%i==0)
printf("%d ",i);
}
getch();
}