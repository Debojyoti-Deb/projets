//Recursion5
#include<conio.h>
#include<stdio.h>
int add(int,int);
int add(int N,int M)
{
int sum;
sum=N+M;
return sum;
//printf("Required Sum = %f",S);
//printf("\nRequired average = %f",A);
}

void main ()
{
clrscr ();
int num1,num2,Y;
printf("Enter the number:");
scanf("%d%d",&num1,&num2);
Y=add(num1,num2);
printf("\nThe sum of two positive digits %d & %d is =%d",num1,num2,Y);
getch ();
}

