#include<conio.h>
#include<stdio.h>
void main ()
{
clrscr ();
int num[25],n,odd=0,even=0,positive=0,negative=0;
printf("Enter the elements of the array here :");
for(int i=0;i<10;i++)
{
scanf("%d",&num[i]);
}
for(i=0;i<10;i++)
{
if(num[i]%2==0)
 {
 //num_even[k]=num[i];
 even++;
 }
 else if(num[i]%2==1)
     {
     //num_odd[j]=num[i];
     odd++;
     }
}
for(i=0;i<10;i++)
{
if(num[i]>=0)
positive++;
 else
negative++;
}
printf("\nEven numbers: %d",even);
printf("\nOdd numbers: %d",odd);
printf("\nPositive numbers: %d",positive);
printf("\nNegative numbers: %d",negative);
getch ();
}
