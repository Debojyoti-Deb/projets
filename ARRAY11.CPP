#include<conio.h>
#include<stdio.h>
void main ()
{
clrscr ();
int num1[10],num2[10],n1,n2,smallest,pos,temp;
printf("Elements to enter in first sorted array...:(upto 10)");
scanf("%d",&n1);
printf("Elements to enter in second sorted array...:(upto 10)");
scanf("%d",&n2);
printf("\nEnter the first sorted array:");
for(int i=0;i<n1;i++)             //initialising 1st array
{
scanf("%d",&num1[i]);
}
printf("\nEnter the second sorted array:");
for(int j=0;j<n2;j++)         //initialising 2nd array
{
scanf("%d",&num2[j]);
}
for(i=n1,j=0;i<(n1+n2);i++,j++) //merging both arrays
{
num1[i]=num2[j];
}
printf("\nPrinting the merged array:");
for(i=0;i<(n1+n2);i++)           //printing of merged array
{
printf("%d ",num1[i]);
}
/*
//sorting merged array
for(i=0;i<(n1+n2)-1;i++)
{
smallest=num1[i];
pos=i;
for(int k=i+1;k<(n1+n2);k++)
 {
 if(num1[k]<smallest)
  {
  smallest=num1[k];
  pos=k;
  }
 }
temp=num1[i];
num1[i]=num1[pos] ;
num1[pos]=temp ;
}
printf("\nPrinting the sorted array:");
for(i=0;i<(n1+n2);i++)           //printing of merged array
{
printf("%d ",num1[i]);
}
*/
getch ();
}

