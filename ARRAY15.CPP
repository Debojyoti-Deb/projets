#include<conio.h>
#include<stdio.h>
void main ()
{
clrscr ();
int num[20],num2[20],n,temp;
printf("How many elements to enter:");scanf("%d",&n);
printf("Enter the array elements: ");
for(int i=0;i<n;i++)
{
scanf("%d",&num[i]);
num2[i]=num[i];
}
for(i=1;i<=n;i++)
{
 for(int j=1;j<=n;j++)
 {
  if(num[i]<=num[j])
   {
    temp=num[i];
    num[i]=num[j];
    num[j]=temp;
   }
  }
}
printf("The second largest element is: %d",num[n-1]);
printf("\nThe second smallest element is: %d",num[2]);
getch ();
}

