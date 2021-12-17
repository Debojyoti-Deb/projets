#include<iostream.h>
#include<conio.h>
void main ()
{
clrscr ();
char str[20];
int i,flag,j;
cout<<"Enter the string:";
cin>>str;
for(j=0;str[j]!='\0';j++)
{
}
j--;
for(i=0,j=0;i<j;i++,j--)
{
if(str[i]!=str[j])
flag=1  ;
}
if(flag==0)
cout<<"palindrom";
else
cout<<"not palindrom " ;
getch ();
}

