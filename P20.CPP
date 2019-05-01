#include<iostream.h>
#include<conio.h>

void main()
{ clrscr();

  cout<<"This program prints the number of leaves in a m-ary tree with i internal vertices"<<endl;
  int n,i,m,leaves;
  cout<<"Enter m:"<<endl;
  cin>>m;
  cout<<"Enter i:"<<endl;
  cin>>i;
  n=(m*i + 1);
  cout<<"Total number of vertices: "<<n<<endl;
  leaves =
  ((m-1)*n + 1)/m;
  cout<<"Number of leaves: "<<leaves<<endl;

  getch();
  return;
}