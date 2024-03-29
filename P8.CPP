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


// C++ program of Next Greater Frequency Element
#include <iostream>
#include <stack>
#include <stdio.h>

using namespace std;

/*NFG function to find the next greater frequency
element for each element in the array*/
void NFG(int a[], int n, int freq[])
{

	// stack data structure to store the position
	// of array element
	stack<int> s;
	s.push(0);

	// res to store the value of next greater
	// frequency element for each element
	int res[n] = { 0 };
	for (int i = 1; i < n; i++)
	{
		/* If the frequency of the element which is
			pointed by the top of stack is greater
			than frequency of the current element
			then push the current position i in stack*/

		if (freq[a[s.top()]] > freq[a[i]])
			s.push(i);
		else {
			/*If the frequency of the element which
			is pointed by the top of stack is less
			than frequency of the current element, then
			pop the stack and continuing popping until
			the above condition is true while the stack
			is not empty*/

			while ( !s.empty()
				&& freq[a[s.top()]] < freq[a[i]])
			{

				res[s.top()] = a[i];
				s.pop();
			}
			// now push the current element
			s.push(i);
		}
	}

	while (!s.empty()) {
		res[s.top()] = -1;
		s.pop();
	}
	for (int i = 0; i < n; i++)
	{
		// Print the res list containing next
		// greater frequency element
		cout << res[i] << " ";
	}
}

// Driver code
int main()
{

	int a[] = { 1, 1, 2, 3, 4, 2, 1 };
	int len = 7;
	int max = INT16_MIN;
	for (int i = 0; i < len; i++)
	{
		// Getting the max element of the array
		if (a[i] > max) {
			max = a[i];
		}
	}
	int freq[max + 1] = { 0 };

	// Calculating frequency of each element
	for (int i = 0; i < len; i++)
	{
		freq[a[i]]++;
	}

	// Function call
	NFG(a, len, freq);
	return 0;
}

