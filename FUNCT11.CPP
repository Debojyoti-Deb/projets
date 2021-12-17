#include<conio.h>
#include<stdio.h>
void array(int,int);
void array(int N,int n[])
{
int largest,smallest;
printf("Enter the elements of the array:");
for(int i=0;i<N;i++)
 {
 scanf("%d",n[i]);
 }
for( i=0;i<N;i++)
 {
 printf("%d ",n[i]);
 }
largest=n[0];
smallest =n[0];
for(i=1;i<N;i++)
{
if(n[i]>largest)
largest=n[i];
if(n[i]>smallest)
smallest=n[i];
}
printf("\nLargest element in the array is %d",largest);
printf("smallest element in the array is %d",smallest);
}

void main ()
{
clrscr ();
int n1,n[10];
printf("Enter the number of elements to enter in the array:");
scanf("%d",&n1);
array(n1,n);
getch ();
}
