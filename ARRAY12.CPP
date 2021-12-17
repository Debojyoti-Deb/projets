#include<conio.h>
#include<stdio.h>
#include<process.h>
void main ()
{
clrscr ();
int num[20],n,pos,element;
printf("Elements to enter in array...:(upto 20)");
scanf("%d",&n);
printf("\nEnter the first array:");
for(int i=0;i<n;i++)             //initialising 1st array
{
scanf("%d",&num[i]);
}
printf("\nEnter the element to be inserted:");
scanf("%d",&element);
if(n==20)
{
printf("Array overflowed!!...");
exit(0);
}
if(element<num[0])
pos=0;
else
{
for(int i=0;i<n;i++)
 {
  if(num[i]<=element&& element<num[i+1])
  {
  pos=i+1;
  break;
  }
 }
if(i==n-1)
pos=n;
}
for(i=n;i>pos;i--)
{
num[i]=num[i-1];
}
num[pos]=element;
n=n+1;
printf("the updated array is :");

for(i=0;i<n;i++)             //initialising 1st array
{
printf("%d ",num[i]);
}
getch ();
}

