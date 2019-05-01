#include<iostream.h>
#include<conio.h>

void main()
{ clrscr();

  int n,i;
  cout<<"Enter the total number of vetrices "<<endl;
  cin>>n;
  cout<<"Enter the adjacency matrix "<<endl;
  int arr[10][10];

  for(i=0;i<n;i++)
  {
    for(int j=0;j<n;j++)
    {
      cin>>arr[i][j];
    }
    cout<<endl;
  }

  cout<<"The degree of vertices are: "<<endl;
  int ar[10];
  for(i=0;i<n;i++)
  ar[i]=0;

  int y=0;
  for(i=0;i<n;i++)
  {
    for(int j=0;j<n;j++)
    {
      ar[y]+=arr[y][j];
    }

    y++;
  }

  cout<<"Vertices are: "<<endl;
  for(i=1;i<=n;i++)
  cout<<i<<" ";
  cout<<endl;

  cout<<"Degrees are: "<<endl;
  for(i=0;i<n;i++)
  cout<<ar[i]<<" ";
  cout<<endl;

  int even=0;
  int odd=0;

  for(i=0;i<n;i++)
  {
    if(ar[i]%2==0)
    {
      ++even;
    }
    else
    {
      ++odd;
    }
  }

  cout<<"Vertices with even degree:"<<" "<<even<<endl;
  cout<<"Vertices with odd degree:"<<" "<<odd<<endl;

  if(even==n)
  {
    cout<<"Euler circuit exists for given graph"<<endl;
  }
  else if(even==n-2 && odd==2)
  {
    cout<<"Euler path exists for given graph but euler circuit doesn't exists"<<endl;
  }

  else
  {
   cout<<"Both euler path and euler circuit doesn't exists"<<endl;
  }

  getch();
  return;
}