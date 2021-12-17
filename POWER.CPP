#include<conio.h>
#include<stdio.h>
#include<math.h>
void main ()
{
clrscr ();
int result,n;
printf("Enter the value of n here : ");
scanf("%d",&n);
printf("The cube of first n natural no.s are :");
for(int i=1;i<=n;i++)
{
result=pow(i,3);
printf("%d ",result);
}
getch ();
}