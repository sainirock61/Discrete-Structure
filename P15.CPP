#include<iostream.h>
#include<conio.h>
#include<math.h>

void main()
{ clrscr();

  cout<<"Enter the degree of the polynomial:"<<endl;
  int n;
  cin>>n;
  int array[10];
  for(int y=0;y<n;y++)
  array[y]=0;

  for(int i=n;i>=0;i--)
  {
    cout<<"Enter the coefficient of x^"<<i<<" "<<endl;
    cin>>array[i];
    cout<<endl;
  }
  cout<<"Function is f(x)= "<<endl;

  for(int h=n;h>=0;h--)
  cout<<array[h]<<"x^"<<h<<"+ ";
  cout<<endl;

  int var;
  cout<<"Enter the value of n to compute f(n) for the function ";
  cin>>var;
  cout<<endl;
  int result=0;
  int k=n;


  for(int j=0;j<=k;j++)
  {
    result+=pow(var,n)*array[n];
    n--;
  }
  cout<<"f("<<var<<")"<<" comes out to be "<<result<<endl;

  getch();
  return;
}