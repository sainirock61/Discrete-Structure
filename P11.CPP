#include<iostream.h>
#include<conio.h>

int fact(int num)
{
  if (num==1)
  {
    return 1;
  }
  else
  {
    return num*fact(num-1);
  }
}

int main()
{
  clrscr();

  int n,r,nPr,nCr;

  cout<<"Enter n:";
  cin>>n;

  cout<<"Enter r:";
  cin>>r;

  nPr=fact(n)/fact(n-r);

  nCr=nPr/fact(r);


  cout<<"nPr is:"<<nPr<<endl;
  cout<<"nCr is:"<<nCr;

  getch();
  return 0;
}










