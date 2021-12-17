//program to check prime number
#include<conio.h>
#include<stdio.h>
void main ()
{
clrscr ();
int num,count=0;
printf("Enter the number here :");
scanf("%d",&num);
for(int i=1;i<=num;i++)
{
 if(num%i==0)
 count++;
}
if(count==2)
printf("Entered number %d is prime ",num);
else
printf("Number %d is not prime ",num);
getch ();
}
