#include<stdio.h>
#include<conio.h>
 void main()
 {
 clrscr();
 char ch, NextCh;
 printf("Enter only one character:");
 scanf("%c", &ch);
 NextCh = (char) ((int)ch+25);
 printf("New Character which is 25 times greater in Ascii Table is: %c", NextCh);
 getch();
 }
