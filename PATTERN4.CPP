//printing a pattern in C
#include<conio.h>
#include<stdio.h>
void main ()
{
clrscr ();
int num=1;
printf("The pattern of is displayed below :\n");
for(int i=1;i<=4;i++)
{
  for(int j=1;j<=i;j++)
  {
  printf("%d ",num);
  num++;
  }
printf("\n");
}
getch ();
}
