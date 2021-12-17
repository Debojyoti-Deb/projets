#include<conio.h>
#include<stdio.h>
void main ()
{
clrscr ();
int num[20],n,num_odd[10],num_even[10],k=0,j=0,even,odd;
printf("How many elements to enter :");
scanf("%d",&n);
printf("Enter the elements of the array here :");
for(int i=0;i<n;i++)
{
scanf("%d",&num[i]);
}
for(i=0;i<n;i++)
{
if(num[i]%2==0)
 {
 num_even[k]=num[i];
 k++;
 }
else
 {
 num_odd[j]=num[i];
 j++;
 }
}
even=k;
odd=j;
printf("Array containing even numbers:");
for(k=0;k<even;k++)
{
printf("%d ",num_even[k]);
}
printf("\nArray containing odd numbers:");
for(j=0;j<odd;j++)
{
printf("%d ",num_odd[j]);
}
getch ();
}
