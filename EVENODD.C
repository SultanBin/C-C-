#include<conio.h>
#include<stdio.h>
void main()
{
int Num;
printf("\nEnter Any Positive Number: ");
scanf("%d", &Num);
if (Num&2!=0)
printf("\nThe Number is Even: ");
if (Num%2!=0)
printf ("\nThe Number is Odd: ");
getch();
clrscr();
}
