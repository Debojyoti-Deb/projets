//to print the decimal to binary
#include<conio.h>
#include<stdio.h>
void binary(int);
void binary(int n)
{
int N[10],count=0,temp;
temp=n;
for(int i=0;n>0;i++)
{
 if(n%2==0)
  {
  N[i]=0;
  n=n/2;
  }
 else
  {
  N[i]=1;
  n=n/2;
  }
count++;
}
printf("The binary of %d is :",temp);
for(i=count-1;i>=0;i--)
printf("%d ",N[i]);
}

void main ()
{
clrscr ();
int num;
printf("Enter the number:");
scanf("%d",&num);
binary(num);
getch ();
}




