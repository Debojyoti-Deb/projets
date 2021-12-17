//Recursion6
#include<conio.h>
#include<stdio.h>
int multiply(int,int);
int multiply(int N,int M)
{
int product;
product=N*M;
return product;
//printf("Required Sum = %f",S);
//printf("\nRequired average = %f",A);
}

void main ()
{
clrscr ();
int num1,num2,Y;
printf("Enter the number:");
scanf("%d%d",&num1,&num2);
Y=multiply(num1,num2);
printf("\nThe product of two positive digits %d & %d is =%d",num1,num2,Y);
getch ();
}
