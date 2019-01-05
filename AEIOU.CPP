#include<stdio.h>
#include<conio.h>
void main();
{
char ch;

printf("Enter Your Alphabet :");
scanf("%c", &ch);

if(ch=='A'|| ch=='a'|| ch=='E' || ch=='e' || ch=='I' || ch=='i' || ch=='O' || ch=='o' || ch=='U' || ch=='u')

printf("%c is a Vowel", ch);
else
printf("%c is not a Vowel", ch);


getch();
clrscr();
}
