#include<iostream>
using namespace std ;

struct Node{
	char data ;
	Node *left ;
	Node *right ;
};

void preorder (Node *root){
	if( root == NULL ) return ;
	
	//visit the root 
	cout<<root->data<<"\t";
	
	// then go to the left childer 
	preorder(root->left);
	
	//go to the right
	preorder(root->right);
		
}
void inorder (Node *root){
	if( root == NULL ) return ;
	
	
	//  go to the left childer 
	inorder(root->left);
	
	//then visit the root 
	cout<<root->data<<"\t";
	
	//go to the right
	inorder(root->right);
		
}

void postorder (Node *root){
	if( root == NULL ) return ;
	
	
	//  go to the left childer 
	postorder(root->left);
	
	// go to the right
	postorder(root->right);
		
	
	//then visit the root 
	cout<<root->data<<"\t";
			
}

// Function to Insert Node in a Binary Search Tree
Node* Insert(Node *root,char data) {
	if(root == NULL) {
		root = new Node();
		root->data = data;
		root->left = root->right = NULL;
	}
	else if(data <= root->data)
		root->left = Insert(root->left,data);
	else 
		root->right = Insert(root->right,data);
	return root;
}

int main() {
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
	//Print Nodes in Preorder. 
	cout<<"Preorder : ";
	preorder(root);
	cout<<"\n";
	//Print Nodes in Inorder
	cout<<"Inorder  : ";
	inorder(root);
	cout<<"\n";
	//Print Nodes in Postorder
	cout<<"Postorder: ";
	postorder(root);
	cout<<"\n";
}

