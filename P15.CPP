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
 
 char ch='A';    
    int i, j, k, m;    
    for(i=1;i<=5;i++)    
    {    
        for(j=5;j>=i;j--)    
            cout<<" ";    
        for(k=1;k<=i;k++)    
            cout<<ch++;    
            ch--;    
        for(m=1;m<i;m++)    
            cout<<--ch;    
        cout<<"\n";    
        ch='A';    
    }    


  for(int j=0;j<=k;j++)
  {
    result+=pow(var,n)*array[n];
    n--;
  }
  cout<<"f("<<var<<")"<<" comes out to be "<<result<<endl;

  getch();
  return;
}
