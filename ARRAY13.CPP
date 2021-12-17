#include<conio.h>
#include<stdio.h>
void main ()
{
clrscr ();
int num[20],smallest,n,pos,temp,element;
printf("Elements to enter in array...:(upto 20)");
scanf("%d",&n);
printf("\nEnter the first array:");
for(int i=0;i<n;i++)             //initialising 1st array
{
scanf("%d",&num[i]);
}
printf("\nEnter the element to be inserted:");
scanf("%d",&element);
num[n+1]=element;
n=n+1;
for(i=0;i<n;i++)
{
smallest=num[i];
pos=i;
for(int k=i+1;k<n;k++)
 {
 if(num[k]<smallest)
  {
  smallest=num[k];
  pos=k;
  }
 }
temp=num[i];
num[i]=num[pos] ;
num[pos]=temp ;
}
printf("The array after sorting is:");
{
printf("%d ",num[i]);
}
getch ();
}


