//to check prime number
#include<conio.h>
#include<stdio.h>
int prime(int);
int prime(int n)
{
int count=0;
for(int i=1;i<=n;i++)
{
 if(n%i==0)
  count++;
}
if(count==2)
 return 1;
else
 return 0;
}

void main ()
{
clrscr ();
int num,y;
printf("Enter the number:");
scanf("%d",&num);
y=prime(num);
if(y==1)
printf("Number %d is prime ",num);
else
printf("Number %d is not prime ",num);
getch ();
}




