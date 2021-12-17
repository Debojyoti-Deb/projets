//program to check prime number
#include<conio.h>
#include<stdio.h>
void main ()
{
clrscr ();
int count,num_beg,num_end;
printf("Enter the starting number of range here :");
scanf("%d",&num_beg);
printf("Enter the starting number of range here :");
scanf("%d",&num_end);
for(int i=num_beg;i<=num_end;i++)
{
 count=0;
 for(int j=1;j<=i;j++)
 {
 if(i%j==0)
 count++;
 }
if(count==2)
 printf("\nEntered number %d is prime ",i);
}
getch ();
}
