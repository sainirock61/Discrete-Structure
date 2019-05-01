#include<iostream.h>
#include<conio.h>
#include<math.h>

void isMember(int ar[100], int set_size,int item)
{
  int k=0;
  for(int i=0;i<set_size;i++)
  {
    if(ar[i]==item)
    {
       k=1;
       break;
    }
  }
  if (k==1)
  cout<<"Element is present in the set"<<endl;
  else
  cout<<"Element is not present in the list"<<endl;
}

void powerset(int ar[100], int set_size)
{
  unsigned int powsetsize=pow(2,set_size);
  int c,j;
  cout<<"Elements of power set:"<<endl;
  for(c=0;c<powsetsize;c++)
  {
    for(j=0;j<set_size;j++)
    {
      if(c&(1<<j))
      cout<<" "<<ar[j];
    }
    cout<<endl;
  }
}

int main()
{
  clrscr();
  int n,i;
  cout<<"Enter the number of elements :\n";
  cin>>n;
  int ar[100];
  cout<<"Enter the elements : \n";
  for(i=0;i<n;++i)
  {
   cin>>ar[i];
  }
  cout<<"\nEnter the element to be searched : \n";
  int ele;
  cin>>ele;
  isMember(ar,n,ele);
  powerset(ar,n);
  getch();
  return 0;
}
