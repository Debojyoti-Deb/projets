//Recursion1
#include<conio.h>
#include<stdio.h>
void fibonacci(int);
void fibonacci(int N)
{
int first,second,third;
first=0;
second=1;
printf("%d %d",first,second);
for(int i=0;i<N-2;i++)
{
third=first+second;
first=second;
second=third;
printf(" %d",third);
}
//printf("Required Sum = %f",S);
//printf("\nRequired average = %f",A);
}

void main ()
{
clrscr ();
int num,Y;
printf("Enter the number:");
scanf("%d",&num);
fibonacci(num);
getch ();
}




