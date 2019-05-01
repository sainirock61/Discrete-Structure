#include<iostream.h>
#include<conio.h>

void toh(int n,char sour, char aux,char des)
{
   if(n==1)
   {
     cout<<"Move Disk "<<n<<" from "<<sour<<" to "<<des<<endl;
     return;
   }

   toh(n-1,sour,des,aux);
   cout<<"Move Disk "<<n<<" from "<<sour<<" to "<<des<<endl;
   toh(n-1,aux,sour,des);
}

int main()
{  clrscr();
   int n;

   cout<<"Enter no. of disks:";
   cin>>n;
   toh(n,'A','B','C');
   getch();
   return 0;
}