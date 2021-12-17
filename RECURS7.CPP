//Recursion7
#include<conio.h>
#include<stdio.h>
#include<math.h>
float expo(float);
float expo(float N)
{
float product;
product=pow(2.64,N);
printf("%f",product);
return product;
//printf("Required Sum = %f",S);
//printf("\nRequired average = %f",A);
}

void main ()
{
clrscr ();
float num1,Y;
printf("Enter the number:");
scanf("%f",&num1);
Y=expo(num1);
printf("\nThe exponential power is =%f",Y);
getch ();
}
