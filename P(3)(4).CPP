#include<iostream.h>
#include<conio.h>

int main()
{
  clrscr();
  int a[10][10],m,i,j,k,r=1,ir=1,s=1,ans=1,tr=1;
  cout<<"Enter the order of the square matrix:";
  cin>>m;
  cout<<"Enter the relation in matrix format(0/1):"<<endl;
  for(i=0;i<m;i++)
  {
  for(j=0;j<m;j++)
    {
      cin>>a[i][j];
    }
  cout<<endl;
  }

  //to check reflexive
  for(i=0;i<m;i++)
  {
    if(a[i][i]!=1)
    r=0;
    if(a[i][i]!=0)
    ir=0;
  }

  //to check symmetric
  for(i=0;i<m;i++)
  for(j=0;j<m;j++)
  {
    if(a[i][j]==1 && a[j][i]!=1)
    s=0;
    if(a[i][j]==1 && a[j][i]==1 && i!=j)
    ans=0;
  }

  //to check transitive
  for(i=0;i<m;i++)
  for(j=0;j<m;j++)
  for(k=0;k<m;k++)
  if(a[i][j]==1 && a[j][k]==1 && a[i][k]!=1)
  tr=0;
  if(r==1)
  cout<<" Relation is reflexive"<<endl;
  else if(ir==1)
  cout<<" Relation is irreflexive"<<endl;
  else
  cout<<" Relation is neither reflexive nor irreflexive"<<endl;
  if(s==1)
  cout<<" Relation is symmetric"<<endl;
  if(ans==1)
  cout<<" Relation is antisymmetric"<<endl;
  if(s!=1 && ans!=1)
  cout<<" Relation is not symmetric"<<endl;
  if(tr==1)
  cout<<" Relation is transitive"<<endl;
  else
  cout<<" Relation is not transitive"<<endl;
  if(r==1 && s==1 && tr==1)
  cout<<" Relation is equivalence"<<endl;
  else
  cout<<" Relation is not a equivalence relation"<<endl;
  if(r==1 && ans==1 && tr==1)
  cout<<" Relation is partial ordering relation"<<endl;
  else
  cout<<" Relation is not a partial ordering relation";

  getch();
  return 0;
}