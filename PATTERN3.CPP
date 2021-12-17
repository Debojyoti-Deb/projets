//printing a pattern in C
#include<conio.h>
#include<stdio.h>
void main ()
{
clrscr ();
printf("The pattern is displayed below :\n");
for(int i=1;i<=4;i++)
{
  for(int j=1;j<=i;j++)
  {
  printf("%d ",j);
  }
printf("\n");
}
getch ();
}
