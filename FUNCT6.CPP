#include<conio.h>
#include<stdio.h>
#include<math.h>
int power(int,int);
int power(int N,int M)
{
int sq;
sq=pow(N,M);
return sq;
//printf("Required Sum = %f",S);
//printf("\nRequired average = %f",A);
}

void main ()
{
clrscr ();
int num1,num2,Y;
printf("Enter two number:");
scanf("%d%d",&num1,&num2);
Y=power(num1,num2);
printf("%d to the power %d is %d",num1,num2,Y);
getch ();
}



