#include<conio.h>
#include<stdio.h>
int leap(int);
int leap(int n)
{
 if(n%4==0)
   return 1;
 else
  return -1;
}

void main ()
{
clrscr ();
int year,y;
printf("Enter the year:");
scanf("%d",&year);
y=leap(year);
if(y==1)
printf("%d is a leap year",year);
else
printf("%d is not a leap year",year);
getch ();
}
