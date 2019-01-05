#include<stdio.h>
#include<conio.h>
#include<math.h>

 int main()
 {
 clrscr();
 int a,b,c;
 printf("\n Enter First Number=");
 scanf("%i",&a);
 printf("n\ Enter Secound Number=");
 scanf("%i",&b);
 c=a/b;
 c=b*c;
 c=a-c;
 printf("\n Result=%d",c);
 getch();
 return 0;
 }