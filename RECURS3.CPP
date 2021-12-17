//Recursion3
#include<conio.h>
#include<stdio.h>
int sumofd(int);
int sumofd(int N)
{
int rem=0,sum=0;
while(N!=0)
{
rem=N%10;
sum=sum+rem;
N=N/10;
}
return sum;
//printf("Required Sum = %f",S);
//printf("\nRequired average = %f",A);
}

void main ()
{
clrscr ();
int num,Y;
printf("Enter the number:");
scanf("%d",&num);
Y=sumofd(num);
printf("\nSum of digits of %d is =%d",num,Y);
getch ();
}




