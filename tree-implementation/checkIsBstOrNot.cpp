#include<bits/stdc++.h> 
  
using namespace std; 
  
/* A binary tree node has data,  
pointer to left child and  
a pointer to right child */
class Node  
{  
    public: 
    char data;  
    Node* left;  
    Node* right;  
      
    /* Constructor that allocates  
    a new node with the given data 
    and NULL left and right pointers. */
    Node(int data) 
    { 
        this->data = data; 
        this->left = NULL; 
        this->right = NULL; 
    } 
};

// Function to Insert Node in a Binary Search Tree
Node* Insert(Node *root,char data) {
	if(root == NULL) {
		root = new Node(data);
	 //	root->data = data;
	//	root->left = root->right = NULL;
	}
	else if(data <= root->data)
		root->left = Insert(root->left,data);
	else 
		root->right = Insert(root->right,data);
	return root;
}

int isBSTUtil(Node* node, int min, int max);  
  
/* Returns true if the given  
tree is a binary search tree  
(efficient version). */
int isBST(Node* node)  
{  
    return(isBSTUtil(node, CHAR_MIN, CHAR_MAX));  
}  
  
/* Returns true if the given 
tree is a BST and its values 
are >= min and <= max. */
int isBSTUtil(Node* node, int min, int max)  
{  
    /* an empty tree is BST */
    if (node==NULL)  
        return 1;  
              
    /* false if this node violates 
    the min/max constraint */
    if (node->data < min || node->data > max)  
        return 0;  
      
    /* otherwise check the subtrees recursively,  
    tightening the min or max constraint */
    return
        isBSTUtil(node->left, min, node->data) && // Allow only distinct values  
        isBSTUtil(node->right, node->data+1, max); // Allow only distinct values  
}  

bool ISBST( Node* root) 
{ 
    static Node *prev = NULL; 
      
    // traverse the tree in inorder fashion and keep track of prev node 
    if (root) 
    { 
        if (!ISBST(root->left)) 
          return false; 
  
        // Allows only distinct valued nodes  
        if (prev != NULL && root->data <= prev->data) 
          return false; 
  
        prev = root; 
  
        return ISBST(root->right); 
    } 
  
    return true; 
}

int main(){
	
		/*Code To Test the logic
	  Creating an example tree
	            M
			   / \
			  B   Q
			 / \   \
			A   C   Z
    */
	Node* root = NULL;
	root = Insert(root,'M'); root = Insert(root,'B');
	root = Insert(root,'Q'); root = Insert(root,'Z'); 
	root = Insert(root,'A'); root = Insert(root,'C');
	
	 if(ISBST(root))  
        cout<<"Is BST";  
    else
        cout<<"Not a BST";
	
	return 9 ;
}
