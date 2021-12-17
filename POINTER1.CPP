#include<conio.h>
#include<stdio.h>
float product(float F,int I);

void main ()
{
clrscr ();
float num1,pro;
int num2;
printf("Enter the floating number:");
scanf("%f",&num1);
printf("Enter the integer number:");
scanf("%d",&num2);
pro=product(num1,num2);
printf("The reqd. product is= %f",pro);
getch ();
}
float product(float F,int I)
{
float p;
p=F*I;
return p;
}
