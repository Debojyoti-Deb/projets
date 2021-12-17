#include<stdio.h>
#include<conio.h>
void main ()
{
clrscr ();
int num,count=0,alt_num;
printf("Enter the no. here :");
scanf("%d",&num);
alt_num=num;
while(alt_num!=1)
{
 if(alt_num%2!=0)
 {
 count=1;
 break;
 }
 alt_num=alt_num/2;
}
if(count==0)
printf("Given number %d is a power of 2",num);
else
printf("Given number %d is not a power of 2",num);
getch ();
}



