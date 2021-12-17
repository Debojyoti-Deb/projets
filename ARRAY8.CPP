#include<conio.h>
#include<stdio.h>
void main ()
{
clrscr ();
int num[10],n,mid,search,position;
printf("How many elements to enter..(upto 10:");
scanf("%d",&n);
printf("\nEnter the array elements here:");
for(int i=0;i<n;i++)
{
scanf("%d",&num[i]);
}
printf("Enter the element to search :");
scanf("%d",&search);
int start=0,end=n-1;
while(start<=end)
{
 mid=(start+end)/2;
 if(num[mid]==search)
 {
 position=mid+1;
 printf("\nElement %d is found in position %d",search,position);
 break;
 }
 else if(num[mid]<search)
  start=mid+1;
 else
  end=mid-1;
}
getch ();
}
