#include<conio.h>
#include<stdio.h>
void main ()
{
clrscr ();
int num[20],pos,n,element,stop;
printf("How many elements to enter:");
scanf("%d",&n);
printf("Enter the elements here:");
for(int i=0;i<n;i++)
{
scanf("%d",&num[i]);
}
printf("\nEnter the element to delete:");
scanf("%d",&element);
for(i=0;i<n;i++)
{
if(num[i]==element)
 {
 printf("\nElement %d is found in position %d and deleted",num[i],i+1);
 stop=i;
 break;
 }
}
for(i=stop;i<n-1;i++)
{
num[i]=num[i+1];
}
printf("\nThe array after deletion is :");
for(i=0;i<n-1;i++)
{
printf("%d ",num[i]);
}
getch ();
}

