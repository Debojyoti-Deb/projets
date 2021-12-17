#include<conio.h>
#include<stdio.h>
void main ()
{
clrscr ();
int num1[20],num2[20],n,j=0,i;
printf("How many elements u want to enter (1 to 20): ");AGAIN:scanf("%d",&n);
if(n<=20) printf("Value accepted....");
else
{
printf("Invalid entry!!....Enter again(1<=n<=20): "); goto AGAIN;
}
printf("\nEnter the numbers: ");
for(i=0;i<n;i++)
 {
 scanf("%d",&num1[i]);
 }
for(j=1,i=n-1;i>=0;j++,i--)
 {
 num2[j]=num1[i]; printf("%d ",num2[j]);
 }
printf("\nRequired new array in reverse oder is: ");
for(j=1;j<=n;j++)
 {
 printf("%d ",num2[j]);
 }
getch ();
}
