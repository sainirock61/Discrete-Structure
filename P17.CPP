#include<iostream.h>
#include<conio.h>

function reverse()
{

int a[10][10],b[10][10],mul[10][10],r,c,i,j,k;    
cout<<"enter the number of row=";    
cin>>r;    
cout<<"enter the number of column=";    
cin>>c;    
cout<<"enter the first matrix element=\n";    
for(i=0;i<r;i++)    
{    
for(j=0;j<c;j++)    
{    
cin>>a[i][j];  
}    
}    
cout<<"enter the second matrix element=\n";    
for(i=0;i<r;i++)    
{    
for(j=0;j<c;j++)    
{    
cin>>b[i][j];    
}    
}    
cout<<"multiply of the matrix=\n";    
for(i=0;i<r;i++)    
{    
for(j=0;j<c;j++)    
{    
mul[i][j]=0;    
for(k=0;k<c;k++)    
{    
mul[i][j]+=a[i][k]*b[k][j];    
}    
}    
} 
}
function display()
{
for(i=0;i<r;i++)    
{    
for(j=0;j<c;j++)    
{    
cout<<mul[i][j]<<" ";    
}    
cout<<"\n";    
}    
return 0;  
}    

}

void main()
{
  clrscr();
  int arr[10][10];
  int i,j,n;
  cout<<"Enter the vertices of the directed graph:";
  cin>>n;
  cout<<"Enter the elements of the matrix:"<<endl;
  for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
    {
      cin>>arr[i][j];
    }
    cout<<endl;
  }
  cout<<"The adjacency matrix of your directed graph is:"<<endl;
  for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
    {
      cout<<arr[i][j]<<" ";
    }
   cout<<endl;
  }

  //to calculate the out-degre
  int outdeg;
  int v;
  v=1;
  outdeg=0;
  for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
    {
      outdeg=outdeg+arr[i][j];
    }
    cout<<"Out-Degree of "<<v<<" vertex is:"<<outdeg<<endl;
    ++v;
    outdeg=0;
  }

  //to calculate the in-degree
  int indeg;
  int p;
  p=1;
  indeg=0;
  for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
    {
      indeg=indeg+arr[j][i];
    }
    cout<<"In-Degree of "<<p<<" vertex is:"<<indeg<<endl;
    ++p;
    indeg=0;
  }
  getch();
  return;
}

