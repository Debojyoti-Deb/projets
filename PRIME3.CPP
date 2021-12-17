//Calculate the multiplication of first 10 prime numbers
#include<conio.h>
#include<stdio.h>
int main ()
{
clrscr ();
int num,count,loopcount=0,beg,end;
float sum=1,sum2=1,result=0;
printf("Enter the strating number;");
scanf("%d",&beg);
printf("Enter the endling number;");
scanf("%d",&end);
for(int i=beg;i<=end;i++)
{
 for(int n=1;n<=5;n++)
 {
  num=i;
  count=0;
  for(int j=1;j<=i;j++)
   {
   if(num%j==0)
   count++;
   }
  if(count==2)
  {
  printf("\nPRIME NO: %d",num);
  sum=sum*num;
  printf("\nThe result of first five primes = %f",sum);
  }
 }
 for(int p=1;p<=5;p++)
 {
 count=0;
 for(int k=1;k<=i;k++)
  {
   if(num%k==0)
   count++;
  }
  if(count==2)
  {
  printf("\nPRIME NO: %d",num);
  sum2=sum2*num;
  printf("\nThe result is = %f",sum);
 }
loopcount++;
}
if(loopcount==11)
break;
}
result=sum+sum2;
printf("Required result is %f",result);
getch ();
return 0;
}
