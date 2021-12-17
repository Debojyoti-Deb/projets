//to check whether a given number is perfect or not
#include<conio.h>
#include<stdio.h>
void main ()
{
clrscr ();
int n,sum=0;
printf("Enter the number here :");
scanf("%d",&n);
for(int i=1;i<n;i++)
{
 if(n%i==0)
 {
 sum=sum+i;
 }
}
if(sum==n)
printf("The number %d is a perfect number",n);
else
printf("The number %d is a not perfect number",n);
getch ();
}
