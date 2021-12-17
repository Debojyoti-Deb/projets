#include<stdio.h>
#include<conio.h>
void main ()
{
clrscr ();
int num=1;
printf("The pattern given is shown below,,,\n");
for(int i=0;i<4;i++)
{
 for(int j=1;j<=i+1;j++)
 {
 printf("%d ",num);
 num++;
 }
 printf("\n");
}
getch ();
}
