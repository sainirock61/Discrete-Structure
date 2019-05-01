#include<iostream.h>
#include<conio.h>

void main()
{
  clrscr();
  int n;
  cout<<"Enter the number of vertices:"<<endl;
  cin>>n;

  int temp[10][10];
  cout<<endl;
  int array[10];

  for(int i=0;i<n;i++)
  array[i]=i+1;
  int matrix[10][10];

  for(int m=0;m<n;m++)
  {
    for(int k=0;k<n;k++)
    {
      matrix[m][k]=0;
      temp[m][k]=0;
    }
  }

  int a,b;
  do
    {
      cout<<"Enter edges:"<<endl;
      cin>>a>>b;

      matrix[a-1][b-1]=1;
    }while(a!=-1 && b!=-1);

  cout<<"Adjacency Matrix:"<<endl;
  for(int l=0;l<n;l++)
  cout<<array[l];

  cout<<endl;

  for(int j=0;j<n;j++)
  {
    cout<<array[j]<<" ";
    for(int p=0;p<n;p++)
    {
      cout<<matrix[j][p]<<" ";
    }
    cout<<endl;
  }

  cout<<"Enter the length of the path:"<<endl;
  int path;
  cin>>path;

  int matrix2[10][10];
  for(m=0;m<n;m++)
  {
    for(int k=0;k<n;k++)
     {
       matrix2[m][k]=0;
     }
  }

  for(int i1=0;i1<n;i1++)
  {
    for(int i2=0;i2<n;i2++)
     {
       for(int i3=0;i3<n;i3++)
	{
	  matrix2[i1][i2]+=( matrix[i1][i3]* matrix[i3][i2]);
	}
     }
  }


  while(path-2)
  {
    for(int i1=0;i1<n;i1++)
    {
      for(int i2=0;i2<n;i2++)
      {
	temp[i1][i2]=0;
	for(int i3=0;i3<n;i3++)
	{
	  temp[i1][i2]+=matrix2[i1][i3]*matrix[i3][i2];
	}
      }
    }
    for(int i=0;i<n;i++)
    {
      for(int j=0;j<n;j++)
      {
	matrix2[i][j]=temp[i][j];
      }
    }
    --path;
  }

  cout<<"Resulting Matrix:"<<endl;
  for(l=0;l<n;l++)
  cout<<array[l]<<" ";

  cout<<endl;
  for(j=0;j<n;j++)
  {
    cout<<array[j]<<" ";
    for(int p=0;p<n;p++)
    {
      cout<<matrix2[j][p]<<" ";
    }
    cout<<endl;
  }

  int start,end;
  cout<<"Enter the edges:"<<endl;
  cin>>start>>end;

  int number=matrix2[start-1][end-1];
  cout<<"Number of path:"<<number;

  getch();
  return;
}

