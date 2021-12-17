//To check whether a given range of no.s has a perfect no.
#include<stdio.h>
#include<conio.h>
void main ()
{
clrscr ();
int num,sum;
printf("Enter the number here :");
scanf("%d",&num);
for(int j=1;j<=num;j++)
{
 sum=0;
 for(int i=1;i<j;i++)
 {
  if(j%i==0)
  sum=sum+i;
 }
 if(sum==j)
 printf("The number %d is a perfect number\n",j);
 else
 printf("The number %d is not a perfect number\n",j);
}
getch ();
}
