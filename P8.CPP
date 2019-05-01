#include<iostream.h>
#include<conio.h>

void bubblesort(int arr[10], int n)
{
  int temp;
  if(n==1)
  return;
  for(int i=0; i<n-1; i++)
  if(arr[i]> arr[i+1])
  {
    temp= arr[i+1];
    arr[i+1]=arr[i];
    arr[i]=temp;
  }
  bubblesort(arr,n-1);
}

void printarray(int arr[10], int n)
{
  for(int i=0; i<n; i++)
  cout<<" "<<arr[i];
  cout<<endl;
}

void main()
{
  clrscr();
  int arr[100];
  int n;
  cout<<"Enter the size of the array:"<<endl;
  cin>>n;
  int i;
  cout<<"Enter elements in the array:"<<endl;
  for(i=0;i<n;i++)
  cin>>arr[i];
  bubblesort(arr,n);
  printarray(arr,n);
  getch();
}