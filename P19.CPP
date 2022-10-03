#include <bits/stdc++.h>  
#define MAXFACTORS 1024 // Let us consider max factors can be 1024  
using namespace std;  
  
typedef struct   
{  
  
    int size;  
    int factor[MAXFACTORS + 1];  
    int exponent[MAXFACTORS + 1];  
  
} FACTORIZATION;  
  
// Function to find the factorization of M and N  
void FindFactorization(int x, FACTORIZATION* factorization)  
{  
    int i, j = 1;  
    int n = x, c = 0;  
    int k = 1;  
    factorization->factor[0] = 1;  
    factorization->exponent[0] = 1;  
  
    for (i = 2; i <= n; i++) {  
        c = 0;  
  
        while (n % i == 0) {  
            c++;  
  
            // factorization->factor[j]=i;  
            n = n / i;  
            // j++;  
        }  
  
        if (c > 0) {  
            factorization->exponent[k] = c;  
            factorization->factor[k] = i;  
            k++;  
        }  
    }  
  
    factorization->size = k - 1;  
}  
  
  
  
// function to find the gcd using Middle School procedure  
int gcdMiddleSchoolProcedure(int m, int n)  
{  
  
    FACTORIZATION mFactorization, nFactorization;  
  
    int r, mi, ni, i, k, x = 1, j;  
  
    // Step 1.  
    FindFactorization(m, &mFactorization);  
  
  
    // Step 2.  
    FindFactorization(n, &nFactorization);  
  
  
    // Steps 3 and 4.  
    // Procedure algorithm for computing the  
    // greatest common divisor.  
    int min;  
    i = 1;  
    j = 1;  
    while (i <= mFactorization.size && j <= nFactorization.size) {  
        if (mFactorization.factor[i] < nFactorization.factor[j])  
            i++;  
  
        else if (nFactorization.factor[j] < mFactorization.factor[i])  
            j++;  
  
        else /* if arr1[i] == arr2[j] */  
        {  
            min = mFactorization.exponent[i] > nFactorization.exponent[j]  
                    ? nFactorization.exponent[j]  
                    : mFactorization.exponent[i];  
  
            x = x * mFactorization.factor[i] * min;  
            i++;  
            j++;  
        }  
    }  
  
    return x;  
}  
  
  
int main()  
  
{  
  
    int m = 36, n = 60;  
    cout << "GCD of " << m << " and " << n << " is "  
        << gcdMiddleSchoolProcedure(m, n);  
  
    return (0);  
}  



/* Solution 2 */
// C++ program to transform a BST to sum tree
#include<iostream>
using namespace std;

// A BST node
struct Node
{
	int data;
	struct Node *left, *right;
};

// A utility function to create a new Binary Tree Node
struct Node *newNode(int item)
{
	struct Node *temp = new Node;
	temp->data = item;
	temp->left = temp->right = NULL;
	return temp;
}

// Recursive function to transform a BST to sum tree.
// This function traverses the tree in reverse inorder so
// that we have visited all greater key nodes of the currently
// visited node
void transformTreeUtil(struct Node *root, int *sum)
{
// Base case
if (root == NULL) return;

// Recur for right subtree
transformTreeUtil(root->right, sum);

// Update sum
*sum = *sum + root->data;

// Store old sum in current node
root->data = *sum - root->data;

// Recur for left subtree
transformTreeUtil(root->left, sum);
}

// A wrapper over transformTreeUtil()
void transformTree(struct Node *root)
{
	int sum = 0; // Initialize sum
	transformTreeUtil(root, &sum);
}

// A utility function to print indorder traversal of a
// binary tree
void printInorder(struct Node *root)
{
	if (root == NULL) return;

	printInorder(root->left);
	cout << root->data << " ";
	printInorder(root->right);
}

// Driver Program to test above functions
int main()
{
	struct Node *root = newNode(11);
	root->left = newNode(2);
	root->right = newNode(29);
	root->left->left = newNode(1);
	root->left->right = newNode(7);
	root->right->left = newNode(15);
	root->right->right = newNode(40);
	root->right->right->left = newNode(35);

	cout << "Inorder Traversal of given tree\n";
	printInorder(root);

	transformTree(root);

	cout << "\n\nInorder Traversal of transformed tree\n";
	printInorder(root);

	return 0;
}
