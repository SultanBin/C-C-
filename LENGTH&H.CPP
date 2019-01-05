#include<conio.h>
#include<stdio.h>
void main()
{
clrscr ();
float Length,Height,Area,Perimeter;
printf("\n Length & Height of the Rectangle=");
scanf("%f%f",&Length,&Height);
Area=Length*Height;
Perimeter=2*(Length+Height);
printf("\n Area =%f\n Perimeter=%f",Area,Perimeter);
getch ();
}