#include<iostream.h>
#include<conio.h>

void bubblesort(int arr[10], int n)
{
  int temp;
  if(n==1)
  return;
  for(int i=0; i<n-1; i++)
  if(arr[i]> arr[i+1])
  {
    temp= arr[i+1];
    arr[i+1]=arr[i];
    arr[i]=temp;
  }
  bubblesort(arr,n-1);
}

    int num, originalNum, remainder, result = 0;
    cout << "Enter a three-digit integer: ";
    cin >> num;
    originalNum = num;

    while (originalNum != 0) {
        // remainder contains the last digit
        remainder = originalNum % 10;
        
        result += remainder * remainder * remainder;
        
        // removing last digit from the orignal number
        originalNum /= 10;
    }

    if (result == num)
        cout << num << " is an Armstrong number.";
    else
        cout << num << " is not an Armstrong number.";


void printarray(int arr[10], int n)
{
  for(int i=0; i<n; i++)
  cout<<" "<<arr[i];
  cout<<endl;
}

void main()
{
  clrscr();
  int arr[100];
  int n;
  cout<<"Enter the size of the array:"<<endl;
  cin>>n;
  int i;
  cout<<"Enter elements in the array:"<<endl;
  for(i=0;i<n;i++)
  cin>>arr[i];
  bubblesort(arr,n);
  printarray(arr,n);
  getch();
}
