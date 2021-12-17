#include<iostream.h>
#include<conio.h>
class prime
{
public:
int num;
public:
void prim();
};
void prime::prim()
{
int i,count=0;
cout<<"Enter the number :";
cin>>num;
 for(i=1;i<=num;i++)
 {
  if(num%i==0)
   {
   count++;
   }
 }
if(count==2)
cout<<"THE NO IS PRIME";
else
cout<<"THE NO IS NOT PRIME";
}
void main ()
{
clrscr ();
prime p1;
p1.prim() ;
getch ();
}
