#include<conio.h>
#include<stdio.h>
void ave();
void ave()
{
int number;
float S=0,A=0;
printf("Enter the numbers here :");
for(int i=0;i<5;i++)
 {
 scanf("%d",&number);
 S=S+number;
 }
A=S/5;
printf("Required Sum = %f",S);
printf("\nRequired average = %f",A);
}

void main ()
{
clrscr ();
ave();
getch ();
}




