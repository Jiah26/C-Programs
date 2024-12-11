#include<stdio.h>
#include<conio.h>
float balance=0;
void deposit()
{
float amount;
printf("Enter the amount you want to deposit:");
scanf("%f",&amount);
balance=balance+amount;
printf("\nAmount deposited successfully!");
}
void withdraw()
{
float amount;
printf("\nEnter the amount to withdraw:");
scanf("%f",&amount);
if(amount>balance)
{
printf("\nEntered amount is not valid!!");
printf("\nYour current balance is %.2f",balance);
}
else
{
balance=balance-amount;
printf("\nAmount is withdrawn successfully!");
}
}
void display(char username[],char AccountNumber[])
{
printf("\n--Account information--\n");
printf("Username:");
puts(username);
printf("Account Number:");
puts(AccountNumber);
printf("\nCurrent balance : %.2f",balance);
}
int main()
{
char username[50],AccountNumber[20];
printf("Enter your username:");
gets(username);
printf("Enter your Account Number:");
gets(AccountNumber);
int choice;
do{
printf("\nBanking System Menu\n");
printf("1.Deposit\n");
printf("2.Withdraw\n");
printf("3.Display account information\n");
printf("4.Exit.\n");
printf("Enter your choice:");
scanf("%d",&choice);
switch(choice)
{
case 1:
deposit();
break;
case 2:
withdraw ();
break;
case 3:
display(username,AccountNumber);
break;
case 4:
printf("\nExiting the program...");
break;
default:
printf("\nInvalid choice!Please try again.");
}
}
while(choice!=4);
getch();
return 0;
}


