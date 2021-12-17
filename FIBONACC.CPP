#include<iostream.h>
#include<conio.h>
class fib
{
public:
int n;
fib()
{
cout<<"Enter the no in :";
cin>>n;
}
void calc();
};
void fib::calc()
{
int i=1,j;
int first=0,second=1,third;
j=n-2;
cout<<first<<second;
 for(i=1;i<=j;i++)
 {
 third=first+second;
 cout<<third<<" ";
 first=second ;
 second=third;
 }
}
void main ()
{
clrscr ();
fib f1;
f1.calc();
getch ();
}
