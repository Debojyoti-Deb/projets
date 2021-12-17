 #include<conio.h>
#include<stdio.h>
#include<math.h>
void func(int a,int b,int c,int d, int e,float *sum,float *avg,float *std_dev);
void main ()
{
clrscr ();
int a,b,c,d,e;
float sum,avg,std_dev;
printf("Enter the first number:");
scanf("%d",&a);
printf("Enter the 2nd number:");
scanf("%d",&b);
printf("Enter the 3rd number:");
scanf("%d",&c);
printf("Enter the 4th number:");
scanf("%d",&d);
printf("Enter the 5th number:");
scanf("%d",&e);
func(a,b,c,d,e,&sum,&avg,&std_dev);
printf("The sum:%f\n:",sum);
printf("The average: %f\n",avg);
printf("The Standard Deviation: %f",std_dev);
getch ();
}
void func(int a,int b,int c,int d, int e,float *sum,float *avg,float *std_dev)
{
*sum=a+b+c+d+e;
*avg=*sum/5.0;
*std_dev=sqrt(((a-*avg)*(a-*avg))+((b-*avg)*(b-*avg))+((c-*avg)*(c-*avg))+((d-*avg)*(d-*avg))/5.0);
}
