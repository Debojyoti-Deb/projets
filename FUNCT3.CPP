#include<conio.h>
#include<stdio.h>
int check(int);
int check(int N)
{
if(N%2==0)
return 1;
 else
return -1;

//printf("Required Sum = %f",S);
//printf("\nRequired average = %f",A);
}

void main ()
{
clrscr ();
int num,Y;
printf("Enter the number:");
scanf("%d",&num);
Y=check(num);
if(Y==1)
 printf("The number %d is even",num);
else if(Y==-1)
 printf("The number %d is odd",num);
 else
 printf("The number %d is neither even nor odd",num);
getch ();
}




