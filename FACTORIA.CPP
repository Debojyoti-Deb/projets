#include<iostream.h>
#include<conio.h>
class fib
{
public:
int n;
fib()
{
cout<<"Enter the value of n :";
cin>>n;
}
void calc();
};
void fib::calc()
{
int j=1,i=1;
for(i=1;i<=n;i++)
{
j=i*j;
}
cout<<j;
}




void main ()
{
clrscr ();
fib f1;
f1.calc();
getch ();
}
