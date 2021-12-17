#include<stdio.h>
#include<conio.h>
void main()
{
clrscr ();
int n;
printf("Enter any number within 26: ");
LOOP:scanf("%d",&n);
if(n>=1 && n<=26)
 {
 printf("successfully implemented \n");
 }
else
 {
 printf("Invalid number!!(1<=n<=26)....Enter again:");
 goto LOOP;
 }
for(char p=65;p<=(n+64);p++)
{
  for(char j=65;j<=p;j++)
  {
  printf("%c ",j);
  }
printf("\n");
}
getch ();
}

