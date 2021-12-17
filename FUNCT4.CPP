#include<conio.h>
#include<stdio.h>
int fact(int);
int fact(int N)
{
int sq=1;
while(N!=0)
{
sq=sq*N;
N--;
}
return sq;
//printf("Required Sum = %f",S);
//printf("\nRequired average = %f",A);
}

void main ()
{
clrscr ();
int num,Y;
printf("Enter the number:");
scanf("%d",&num);
Y=fact(num);
printf("The factorial of the number %d=%d",num,Y);
getch ();
}




