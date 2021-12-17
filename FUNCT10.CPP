#include<conio.h>
#include<stdio.h>
#include<math.h>
int arm(int);
int arm(int n)
{
 int rem,sum=0,num1;
 num1=n;
 while(n!=0)
 {
 rem=n%10;
 sum=sum+ pow(rem,3);
 n=n/10;
 }
 if(sum==num1)
    return 1;
 else
    return -1;
}

void main ()
{
clrscr ();
int num,y;
printf("Enter the number:");
scanf("%d",&num);
y=arm(num);
if(y==1)
printf("%d is an armstrong number  ",num);
else
printf("%d is not an armstrong number",num);
getch ();
}
