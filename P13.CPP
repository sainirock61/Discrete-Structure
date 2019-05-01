#include<iostream.h>
#include<conio.h>

void negation(int x[],int y[])
{
  cout<<x<<" "<<(!x)<<endl;
  cout<<y<<" "<<(!y)<<endl;
}

void nor(int x[],int y[])
{
  int i,res;
  for(i=0;i<4;++i)
  {
    res= !(x[i]|y[i]);
    cout<<x[i]<<" "<<y[i]<<" "<<res<<endl;
  }
}

void nand(int x[],int y[])
{
  int i,res;
  for(i=0;i<4;++i)
  {
    res= !(x[i]&y[i]);
    cout<<x[i]<<" "<<y[i]<<" "<<res<<endl;
  }
}

void bicon(int x[],int y[])
{
  int i,res;
  for(i=0;i<4;++i)
  {
    res= !(x[i]^y[i]);
    cout<<x[i]<<" "<<y[i]<<" "<<res<<endl;
  }
}

void cond(int x[],int y[])
{
  int i,res;
  for(i=0;i<4;++i)
  {
   res= (!x[i])|y[i];
   cout<<x[i]<<" "<<y[i]<<" "<<res<<endl;
  }
}

void dis(int x[],int y[])
{
  int i,res;
  for(i=0;i<4;++i)
  {
    res= x[i]|y[i];
    cout<<x[i]<<" "<<y[i]<<" "<<res<<endl;
  }
}

void con(int x[],int y[])
{
 int i,res;
 for(i=0;i<4;++i)
  {
    res= x[i]& y[i];
    cout<<x[i]<<" "<<y[i]<<" "<<res<<endl;
  }
}

void Xor(int x[],int y[])
{
  int i,res;
  for(i=0;i<4;i++)
  {
    res=x[i]^y[i];
    cout<<x[i]<<" "<<y[i]<<" "<<res<<endl;
  }
}

int main()
{
  clrscr();
  int x[4],y[4],a,b;
  int i,ch;
  cout<<"Logical Operations:"<<endl;

  cout<<" (1) Conjunction"<<endl;
  cout<<" (2) Disjunction"<<endl;
  cout<<" (3) Exclusive OR"<<endl;
  cout<<" (4) Conditional"<<endl;
  cout<<" (5) Bi-conditional"<<endl;
  cout<<" (6) Exclusive NOR"<<endl;
  cout<<" (7) Negation"<<endl;
  cout<<" (8) NAND"<<endl;
  cout<<" (9) NOR"<<endl;
  cout<<endl;
  cout<<"choose of these operations"<<endl;
  cin>>ch;
  cout<<endl;

  if(ch==7)
  {
    cout<<"Enter the truth values of x and y"<<endl;
    cin>>a;
    cin>>b;
  }
  else
  {
    cout<<"Enter the truth values of x and y"<<endl;
    for(int i=0;i<4;++i)
    {
      cin>>x[i]>>y[i];
    }
  }

  switch(ch)
  {
    case 1:   con(x,y);
	      break;

    case 2:   dis(x,y);
	      break;

    case 3:   Xor(x,y);
	      break;

    case 4:   cond(x,y);
	      break;

    case 5:   bicon(x,y);
	      break;

    case 6:   bicon(x,y);
	      break;

    case 7:   negation(x,y);
	      break;

    case 8:   nand(x,y);
	      break;

    case 9:   nor(x,y);
	      break;

    default:  cout<<"wrong choice....try again"<<endl;
  }
  getch();
  return 0;
}

