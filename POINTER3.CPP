#include<conio.h>
#include<stdio.h>
#include<math.h>
void func(int a,int b,int c,float *avg,float *per);
void main ()
{
clrscr ();
int a,b,c;
float avg,per;
printf("Enter the first sub marks:");
scanf("%d",&a);
printf("Enter the 2nd sub number:");
scanf("%d",&b);
printf("Enter the 3rd sub number:");
scanf("%d",&c);
func(a,b,c,&avg,&per);
printf("The average of marks: %f\n",avg);
printf("The percentsge of marks: %f%",per);
getch ();
}
void func(int a,int b,int c,float *avg,float *per)
{
int sum;
sum=a+b+c;
*avg=sum/3.0;
*per=(sum/300.0)*100;
}
