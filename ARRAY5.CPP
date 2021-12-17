#include<conio.h>
#include<stdio.h>
void main ()
{
clrscr ();
int num[10],greatest,n,least;
printf("How many elements to enter:");
scanf("%d",&n);
printf("Enter the elements of the array: ");
for(int i=0;i<n;i++)
{
scanf("%d",&num[i]);
}
greatest=num[0];
for(i=1;i<n;i++)
  {
  if(greatest<num[i])
  greatest=num[i];
  }
least=num[0];
for(i=1;i<n;i++)
  {
  if(least>num[i])
  least=num[i];
    }
printf("Largest entry = %d",greatest);
printf("\nSmallest entry = %d",least);
getch ();
}