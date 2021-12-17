#include<conio.h>
#include<stdio.h>
#include<math.h>
void func(int *radius,int *area,int *perimeter)
{
*area=3.14*(*radius)*(*radius);
*perimeter=2*3.14*(*radius);
}

void main ()
{
clrscr ();
int radius,area,perimeter;
printf("Enter the radius here:");
scanf("%d",&radius);
func(&radius,&area,&perimeter);
printf("The area of the circle is: %d",area);
printf("\nThe perimeter of the circle is: %d",perimeter);
getch ();
}
