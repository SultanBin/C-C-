#include<conio.h>
#include<stdio.h>
void main()
{
   clrscr();
   float KM,M,CM,FT,IN ;
   printf("\n Enter distance in Kilometers = ");
   scanf("%f",&KM);
   M  = KM*1000;
   CM = M*100;
   FT = M*3.4;
   IN = FT*12;
   printf("\n Meters=%f\nCentimeters=%f\nFeets=%f\nInches=%f",M,CM,FT,IN);
     getch();
}
