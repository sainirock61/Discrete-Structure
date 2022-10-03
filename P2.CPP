#include<iostream.h>
#include<conio.h>
void getar(int a[],int n)
{
    cout<<"\n Please enter the elements : \n";
    int i;
    for(i=0;i<n;++i)
    cin>>a[i];
}
void printar(int a[],int n,char c)
{
    cout<<"\n Set "<<c<<" is :  ";
    int i;
    cout<<"{";
    for(i=0;i<n;++i)
    {
        cout<<a[i];
        if(i!=n-1)
        cout<<",";
    }
    cout<<"}";
}
void printar(int a[],int n)
{
    int i;
    cout<<"{";
    for(i=0;i<n;++i)
    {
        cout<<a[i];
        if(i!=n-1)
        cout<<",";
    }
    cout<<"}";
}

void subset(int a[],int n1,int b[],int n2)
{
    int i,j,flag=0;
    for(i=0;i<n1;++i)
    {
        for(j=0;j<n2;++j)
        {
            if(a[i]==b[j])
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            cout<<"not subset";
            flag=1;
            break;
        }
        else
        flag=0;
    }
    if(flag==0)
    {
        cout<<"Subset";
    }
}
int intersection(int ari[],int a[],int n1,int b[],int n2)
{
     int i,j,k=0;
     for(i=0;i<n1;++i)
     {
         for(j=0;j<n2;++j)
         {
             if(a[i]==b[j])
             {
                 ari[k++]=a[i];
                 break;
             }
         }
     }
     //printar(ari,k,ch);
     return(k);
}
void unioon(int aru[],int a[],int n1,int b[],int n2)
{
    int nt = n1+n2;
    int k,i,j;
    for(i=0;i<n1;++i)
    {
        aru[i]=a[i];
    }

    for(j=n1;j<nt;++j)
    {
        aru[j]=b[j-n1];
    }
    for(i=0;i<nt;++i)
    {
        for(j=i+1;j<nt;++j)
        {
            if(aru[i]==aru[j])
            {

                for(k=j;k<nt-1;++k)
                {
                    aru[k]=aru[k+1];
                }
                nt=nt-1;
                --j;
            }


        }
    }
    //printar(aru,nt,ch);
}

void symdif(int a[],int n1,int b[],int n2)
{
    int ars[n1],i;
    int x=setdifference(ars,a,n1,b,n2);
    int ars2[n2];
    int y=setdifference(ars2,b,n2,a,n1);
    int arsd[x+y];
    for(i=0;i<x;++i)
    {
        arsd[i]=ars[i];
    }
    for(i=x;i<x+y;++i)
    {
        arsd[i]=ars2[i-x];
    }
    cout<<"\n The Set of Symmetric difference is : ";
    printar(arsd,x+y);
}
void cp(int a[],int n1,int b[],int n2)
{
    int i,j;
    cout<<"{";
    for(i=0;i<n1;++i)
    {
        for(j=0;j<n2;++j)
        {
            cout<<"{"<<a[i]<<","<<b[j]<<"}";
            if((i!=n1-1)||(j!=n2-1))
            cout<<";";
        }
    }
    cout<<"}";
}
void comp(int a[],int n1,int b[],int n2)
{
    int i,j,flag;
    int arcom[a-b],k=0;
    for(i=0;i<n1;++i)
    {
        flag=0;
        for(j=0;j<n2;++j)
        {
            if(a[i]==b[j])
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            arcom[k++]=a[i];
        }
    }
    printar(arcom,k);
}
int main()
{
    clrscr();
    int num1,num2,choice;
    char ch;
    cout<<"\n Enter the number of elements for Set A : ";
    cin>>num1;
    int A[num1];
    getar(A,num1);
    cout<<"\n Enter the number of elements for Set B : ";
    cin>>num2;
    int B[num2];
    getar(B,num2);
    ch='A';
    printar(A,num1,ch);
    ch='B';
    printar(B,num2,ch);
    char cl;
    do
    {
    cout<<"\n\n Following are the operations you can perform on the sets :";
    cout<<"\n  1) Subset ";
    cout<<"\n  2) Intersection ";
    cout<<"\n  3) Union ";
    cout<<"\n  4) Set difference ";
    cout<<"\n  5) Symmetric difference ";
    cout<<"\n  6) Cartesian Product ";
    cout<<"\n  7) Complement ";
    cout<<"\n Please choose one of the operation that you want to perform : ";
    cin>>choice;
    switch(choice)
    {
        case 1 :{
                    if(num1>num2)
                    {
                        cout<<"\n B is ";
                        subset(B,num2,A,num1);
                        cout<<" of A";
                    }
                    else
                    {
                        cout<<"\n A is ";
                        subset(A,num1,B,num2);
                        cout<<" of B";
                    }
                    break;
                }
        case 2 :{
                    int ari[20];
                    int nn=intersection(ari,A,num1,B,num2);
                    cout<<"\n The intersection set is : ";
                    printar(ari,nn);
                    break;
                }
        case 3 :{
                    int nttl=num1+num2;
                    int aru[nttl];
                    unioon(aru,A,num1,B,num2);
                    cout<<"\n The Union Set is : ";
                    printar(aru,nttl);
                    break;
                }
        case 4 :{
                    int ars[num1];
                    int x=setdifference(ars,A,num1,B,num2);
                    cout<<"\n Set of A-B is : ";
                    printar(ars,x);
                    int ars2[num2];
                    int y=setdifference(ars2,B,num2,A,num1);
                    cout<<"\n Set of B-A is : ";
                    printar(ars2,y);
                    for(i=0;i<x;++i)
                    {
                        arsd[i]=ars[i];
                    }
                    for(i=x;i<x+y;++i)
                    {
                        arsd[i]=ars2[i-x];
                    }
                    break;
                }
        case 5 :{
                    symdif(A,num1,B,num2);
                    break;
                }
        case 6 :{
                    cout<<"The Cartesian Product is : ";
                    cp(A,num1,B,num2);
                    break;
                }
        case 7 :{
                    cout<<"The complement is : ";
                    comp(A,num1,B,num2);
                }
        default : {
                        cout<<"\n Wrong Choice... please try again...";
                        break;
        }

    }
    cout<<"\n Enter n or N for exit and y(or Y) to continue : ";
    cin>>cl;
    } while(cl=='y'||cl=='Y');
    return(0);
    getch();
}


/* CPP program to convert a Binary tree to BST
using sets as containers. */
#include <bits/stdc++.h>
using namespace std;

struct Node {
	int data;
	struct Node *left, *right;
};

// function to store the nodes in set while
// doing inorder traversal.
void storeinorderInSet(Node* root, set<int>& s)
{
	if (!root)
		return;

	// visit the left subtree first
	storeinorderInSet(root->left, s);

	// insertion takes order of O(logn) for sets
	s.insert(root->data);

	// visit the right subtree
	storeinorderInSet(root->right, s);

} // Time complexity = O(nlogn)

// function to copy items of set one by one
// to the tree while doing inorder traversal
void setToBST(set<int>& s, Node* root)
{
	// base condition
	if (!root)
		return;

	// first move to the left subtree and
	// update items
	setToBST(s, root->left);

	// iterator initially pointing to the
	// beginning of set
	auto it = s.begin();

	// copying the item at beginning of
	// set(sorted) to the tree.
	root->data = *it;

	// now erasing the beginning item from set.
	s.erase(it);

	// now move to right subtree and update items
	setToBST(s, root->right);

} // T(n) = O(nlogn) time

// Converts Binary tree to BST.
void binaryTreeToBST(Node* root)
{
	set<int> s;

	// populating the set with the tree's
	// inorder traversal data
	storeinorderInSet(root, s);

	// now sets are by default sorted as
	// they are implemented using self-
	// balancing BST

	// copying items from set to the tree
	// while inorder traversal which makes a BST
	setToBST(s, root);

} // Time complexity = O(nlogn),
// Auxiliary Space = O(n) for set.

// helper function to create a node
Node* newNode(int data)
{
	// dynamically allocating memory
	Node* temp = new Node();
	temp->data = data;
	temp->left = temp->right = NULL;
	return temp;
}

// function to do inorder traversal
void inorder(Node* root)
{
	if (!root)
		return;
	inorder(root->left);
	cout << root->data << " ";
	inorder(root->right);
}

int main()
{
	Node* root = newNode(5);
	root->left = newNode(7);
	root->right = newNode(9);
	root->right->left = newNode(10);
	root->left->left = newNode(1);
	root->left->right = newNode(6);
	root->right->right = newNode(11);

	/* Constructing tree given in the above figure
		5
		/ \
		7	 9
	/\ / \
	1 6 10 11 */

	// converting the above Binary tree to BST
	binaryTreeToBST(root);
	cout << "Inorder traversal of BST is: " << endl;
	inorder(root);
	return 0;
}

