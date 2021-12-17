//Recursion4
#include<conio.h>
#include<stdio.h>
int gcd(int,int);
int gcd(int N,int M)
{
int gcd;
for(int i=0;i<=N;i++)
{
if(N%i==0 && M%i==0)
    gcd=i;
}
return gcd;
//printf("Required Sum = %f",S);
//printf("\nRequired average = %f",A);
}

void main ()
{
clrscr ();
int num1,num2,Y;
printf("Enter the number:");
scanf("%d%d",&num1,&num2);
Y=gcd(num1,num2);
printf("\nThe GCD of two positive digits %d & %d is =%d",num1,num2,Y);
getch ();
}

