#include<iostream.h>
#include<conio.h>
void main()
{
clrscr ();
int arr[20],size,element,pos,value;
char ch,option;
cout<<"ENTER THE SIZE OF THE ARRAY HERE :";
cin>>size;
cout<<"\nENTER THE ELEMNTS OF THE ARRAY: ";
for (int i=0;i<size;i++)
{
  cin>>arr[i];
}
cout<<"\nTHE ARRAY ENTERED IS: ";
for (i=0;i<size;i++)
{
  cout<<arr[i]<<" ";
}
cout<<"\nENTER ANY OPTION....\n";
cout<<"1.DELETE AN ELEMENT\n";
cout<<"2.INSERT AN ELEMENT\n";
cout<<"3.INSERT AN ELEMENT AT THE END\n";
cout<<"4.INSERT AN ELEMENT AT THE BEGINNING\n";
cout<<"5.DELETE AN ELEMENT AT THE BEGINNING\n";
cout<<"6.DELETE AN ELEMENT AT THE END\n";
do
{
cout<<"OPTION: ";cin>>option;
switch(option)
{
case '1':
  cout<<"ENTER THE ELEMENT TO BE DELETED: ";
  cin>>element;
  //search that elemets's position
  for(i=0;i<size;i++)
  {
   if(arr[i]==element)
    pos=i;
  }
  cout<<pos;
  size=size-1;
  for(i=pos;i<size;i++)
  {
   arr[i]=arr[i+1];
  }
  cout<<"\nUPDATED ARRAY IS: ";
  for (i=0;i<size;i++)
  {
  cout<<arr[i]<<" ";
  }
  break;
case '2':
  size=size+1;
  cout<<"\nENTER THE POSITION OF INSERTION: ";
  cin>>pos;
  cout<<"\nENTER THE ELEMENT TO BE INSERTED: ";
  cin>>value;
  for(i=size-1;i>pos-1;i--)
  {
  arr[i]=arr[i-1];
  }
  arr[pos-1]=value;
  cout<<"\nUPDATED ARRAY IS: ";
  for (i=0;i<size;i++)
  {
  cout<<arr[i]<<" ";
  }
  break;
case '3':
  size =size+1;
  cout<<"ENTER THE VALUE TO BE INSERTED AT THE END: ";
  cin>>value;
  arr[size-1]=value;
  cout<<"\nUPDATED ARRAY IS: ";
  for (i=0;i<size;i++)
  {
  cout<<arr[i]<<" ";
  }
  break;
case '4':
  size=size+1;
  cout<<"ENTER THE VALUE TO BE INSERTED AT THE BEGINNING: ";
  cin>>value;
  for(i=size-1;i>0;i--)
  {
  arr[i]=arr[i-1];
  }
  arr[0]=value;
  cout<<"\nUPDATED ARRAY IS: ";
  for (i=0;i<size;i++)
  {
  cout<<arr[i]<<" ";
  }
  break;
case '5':
  size--;
  for(i=0;i<size;i++)
  {
  arr[i]=arr[i+1];
  }
  cout<<"\nUPDATED ARRAY IS: ";
  for (i=0;i<size;i++)
  {
  cout<<arr[i]<<" ";
  }
  break;
case '6':
  size--;
  cout<<"\nUPDATED ARRAY IS: ";
  for (i=0;i<size;i++)
  {
  cout<<arr[i]<<" ";
  }
  break;
default:
  cout<<"INVALID INPUT...";
}
cout<<"\nDO YOU WANT TO CONTINUE...(y/n)";
cin>>ch;
if(ch=='y' || ch=='Y')
 cout<<"~~~~~~~~~~~~~~~~~~~~~~\n ";
}while(ch=='y'|| ch=='Y');
getch ();
}





