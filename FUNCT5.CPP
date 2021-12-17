#include<conio.h>
#include<stdio.h>
int fact(int);

int fact(int N)
{
int sq=1;
while(N!=0)
{
sq=sq*N;
N--;
}
return sq;
}

void main ()
{
clrscr ();
int sum=0;
sum=fact(1)/1+fact(2)/2+fact(3)/3+fact(4)/4+fact(5)/5;
printf("The factorial sum of series (1!/1+2!/2+3!/3+4!/4+5!/5)is =%d",sum);
getch ();
}




