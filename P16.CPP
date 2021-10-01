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
  
  cout << "Enter dividend: ";
    cin >> dividend;

    cout << "Enter divisor: ";
    cin >> divisor;

    quotient = dividend / divisor;
    remainder = dividend % divisor;

    cout << "Quotient = " << quotient << endl;
    cout << "Remainder = " << remainder;

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
  
  {
   int n1, n2;

   cout << "Enter two positive integers: ";
   cin >> n1 >> n2;

   cout << "H.C.F of " << n1 << " & " <<  n2 << " is: " << hcf(n1, n2);

   return 0;
}

  getch();
  return;
}


int hcf(int n1, int n2)
{
    if (n2 != 0)
       return hcf(n2, n1 % n2);
    else 
       return n1;
}

