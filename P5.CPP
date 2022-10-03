#include <iostream>
using namespace std;

int main() {
    int n, t1 = 0, t2 = 1, nextTerm = 0;

    cout << "Enter the number of terms: ";
    cin >> n;

    cout << "Fibonacci Series: ";

    for (int i = 1; i <= n; ++i) {
        // Prints the first two terms.
        if(i == 1) {
            cout << t1 << ", ";
            continue;
        }
        if(i == 2) {
            cout << t2 << ", ";
            continue;
        }
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
        
        cout << nextTerm << ", ";
    }
    return 0;
}

// Utility function to find leftmost node in a tree rooted
// with n
Node leftMost(Node n)
{
if (n == null)
	return null;

while (n.left != null)
	n = n.left;

return n;
}

// C code to do inorder traversal in a threaded binary tree
static void inOrder(Node root)
{
Node cur = leftMost(root);
while (cur != null)
{
	Console.Write("{0} ", cur.data);

	// If this node is a thread node, then go to
	// inorder successor
	if (cur.rightThread)
	cur = cur.right;
	else // Else go to the leftmost child in right
	// subtree
	cur = leftmost(cur.right);
}
}

// This code is contributed by gauravrajput1
