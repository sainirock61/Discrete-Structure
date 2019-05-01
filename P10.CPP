#include<iostream.h>
#include<conio.h>

int arr[10]={0};
void swapNo(int x,int y);
void printArray(int length);
void permute(int k,int length);

void swapNo(int x,int y)
{
  int temp=arr[x];
  arr[x]=arr[y];
  arr[y]=temp;
}

void printArray(int length)
{
  for(int i=0;i<length;i++)
  cout<<arr[i]<<" ";
  cout<<endl;
}

void permute(int k,int length)
{
  if(k==0)
    printArray(length);
  else
   {
     for(int i=k-1;i>=0;i--)
     {
       swapNo(i,k-1);
       permute(k-1, length);
       swapNo(i,k-1);
     }
   }
}




void main()
{
  clrscr();
  cout<<"Enter the no. of Elements:"<<endl;
  int n;
  cin>>n;
  cout<<"Enter the elements:"<<endl;
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }

  permute(n,n);
  getch();
  return;
}
