#include<stdio.h>
#include<conio.h>
void main ()
{
float distance,time,speed;
clrscr();
{
printf("Enter distance and time:");
scanf("%f %f",&distance,&time);
speed=distance/time;
printf("%f is speed",speed);
}
getch();
}