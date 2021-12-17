#include<conio.h>
#include<stdio.h>
float square(float);
float square(float N)
{
float sq=1;
sq=N*N;
return sq;
//printf("Required Sum = %f",S);
//printf("\nRequired average = %f",A);
}

void main ()
{
clrscr ();
float num,Y;
printf("Enter the number:");
scanf("%f",&num);
Y=square(num);
printf("The square of the number %f=%f",num,Y);
getch ();
}




