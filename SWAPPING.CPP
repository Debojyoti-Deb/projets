#include<stdio.h>
#include<conio.h>
void main ()
{
 clrscr ();
 int a,b,c;
 printf("Enter the two numbers: ");
 scanf("%d%d",&a,&b);
 c=a;
 a=b;
 b=c;
 printf("The numbers after swapping are:%d %d",a,b);
 getch ();
 }