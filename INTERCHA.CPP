#include<iostream.h>
#include<conio.h>
void interchange(int&,int&)
void main ()
{
clrscr ();
int first,seconf;
cout<<"Enter the first number";
cin>>first;
cout<<"Enter the second number";
cin>>second;
interchnage(first,second);
getch ();
}

void interchange(int &x,int &y)
{
int a;
a=x;
x=y;
y=a;
cout<<x<<y;
}