//program to check whether a no. is armstrong number or not
#include<conio.h>
#include<stdio.h>
#include<math.h>
void main ()
{
clrscr ();
int num,num_1,sum=0,rem;
printf("Enter the number here :");
scanf("%d",&num);
num_1=num;
while(num>0)
{
 rem=num%10;
 sum=sum+pow(rem,3);
 num=num/10;
}
if(sum==num_1)
printf("Entered number %d is an armstrong number",num_1);
else
printf("Entered number %d not an armstrong number",num_1);
getch ();
}


