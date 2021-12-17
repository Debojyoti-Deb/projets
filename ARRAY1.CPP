//no.
#include<iostream.h>
#include<conio.h>
int main()
{
clrscr ();
int arr[10],i,search;
cout<<"Enter the values of the array in:";
 for(i=0;i<4;i++)
 {
 cin>>arr[i];
 }
cout<<"Enter the value to be changed in :";
cin>>search;
for(i=0;i<4;i++)
{
 if(arr[i]==search)
 {
 arr[i]=0;
 }
}
 for(i=0;i<4;i++)
 {
  if (arr[i]==0)
   {
    arr[i]=arr[i-1];
    }
  else
   if(arr[i]!=0)
    arr[i]=arr[i-1];
}
 for(i=0;i<4;i++)
 {
 cout<<arr[i];
 }
getch();
return 0;
}

