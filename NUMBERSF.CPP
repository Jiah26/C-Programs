#include<stdio.h>
#include<conio.h>
void main ()
{
int n=28,counter=6;
clrscr();
printf("\nThe next %d numbers starting from %d are:",counter,n);
for(int i=0;i<counter;i++){
printf("%d ",n+i);
}
getch();
}

