#include<iostream.h>
#include<iomanip.h>
#include<conio.h>
int main()
{
clrscr ();
int ar[3][3],i,j,d1=0,d2=0;
for(i=0;i<3;i++)
{
 for(j=0;j<3;j++)
  {
   cout<<"Enter the elements of the matrix  :";
   cin>>ar[i][j];
  }
}
for(i=0;i<3;i++)
{
 for(j=0;j<3;j++)
 {
 if(i==j)
 {
  d1=d1+ar[i][j];
 }
 if(i+j==2)
 {
  d2=d2+ar[i][j];
  }
 }
}
cout<<d1<<"\n"<<d2;
getch ();
return 0;
}
