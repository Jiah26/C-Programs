#include<stdio.h>
#include<conio.h>
struct fri
{
char name[50];
char nick[50];
char city[50];
int no;
};
void main()
{
struct fri a[3];
int i;
clrscr();
for(i=0;i<3;i++)
{
printf("Name:");
scanf("%s",a[i].name);
printf("Nickname:");
scanf("%s",a[i].nick);
printf("City:");
scanf("%s",a[i].city);
printf("Mobile:");
scanf("%d",a[i].no);
}
for(i=0;i<3;i++)
{
printf("\n Name:%s",a[i].name);
printf("\n Nickname:%s",a[i].nick);
printf("\n City:%s",a[i].city);
printf("\n Mobile:%d",a[i].no);
}
getch();
}