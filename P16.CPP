#include<iostream.h>
#include<conio.h>

void main()
{
  clrscr();
  int ar[10][10];
  int i,j,n;
  cout<<"Enter the no. of vertices:";
  cin>>n;
  cout<<"Enter the elements of the matrix:"<<endl;
  for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
    {
      cin>>ar[i][j];
    }
    cout<<endl;
  }
  cout<<"The adjacency matrix of your graph is:"<<endl;
  for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
    {
      cout<<ar[i][j]<<" ";
    }
    cout<<endl;
  }

  //to check for a complete graph
  int c;
  c=0;
  for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
    {
      if(i!=j && ar[i][j]==0)
      ++c;
    }
  }
  if(c==0)
  cout<<"The given graph is a complete graph"<<endl;
  else
  cout<<"The given graph is not a complete graph"<<endl;

  getch();
  return;
}

