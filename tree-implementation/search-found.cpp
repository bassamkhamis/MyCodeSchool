#include<iostream>

using namespace std ;

struct BstNode {
	int data ;
	BstNode * left ;
	BstNode *right ;
	
};

BstNode *GetNewNode( int data){
	BstNode *NewNode = new BstNode();
	NewNode->data = data ;
	NewNode->left = NewNode->right = NULL ;
	return NewNode ;
}

// to find min element in tree, using itritve 
int find_min_itritve(BstNode *root){
	
 	if(root == NULL){
 		cout<<"error!!"<<endl;
		return -1;               // indecate to error, if BST is posstive
	 }
 	while(root->left != NULL){
 		root = root->left;
	 }
	 return root->data ;
	
}


// to find max element in tree, using itritve 
int find_max_itritve(BstNode *root){
	
 	if(root == NULL){
 		cout<<"error!!"<<endl;
		return -1;               // indecate to error, if BST is posstive
	 }
 	while(root->right != NULL){
 		root = root->right ;
	 }
	 return root->data ;
	
}
/// to find min element in tree using recursive
int find_min_recursive( BstNode *root ){
	
		if( root == NULL ){
 		cout<<"error!!"<<endl;
		return -1;               // indecate to error, if BST is posstive
	 }
	 
	 else if( root->left == NULL )
	 return root->data ;
	 
	 return find_min_recursive(root->left);
}

/// to find max element in tree using recursive
int find_max_recursive( BstNode *root ){
	
		if( root == NULL ){
 		cout<<"error!!"<<endl;
		return -1;               // indecate to error, if BST is posstive
	 }
	 
	 else if( root->right == NULL )
	 return root->data ;
	 
	 return find_max_recursive(root->right);
}

// To insert data in BST, returns address of root node 
BstNode* Insert( BstNode* root,int data ) {
	if(root == NULL) { // empty tree
		root = GetNewNode(data);
   }
	// if data to be inserted is lesser, insert in left subtree. 
	else if(data <= root->data) {
		root->left = Insert(root->left,data);
	}
	// else, insert in right subtree. 
	else {
		root->right = Insert(root->right,data);
	}
	return root;
}
//To search an element in BST, returns true if element is found
bool Search(BstNode* root,int data) {
	if(root == NULL) {
		return false;
	}
	else if(root->data == data) {
		return true;
	}
	else if(data <= root->data) {
		return Search(root->left,data);
	}
	else {
		return Search(root->right,data);
	}
}

int findHieght(BstNode* root){
	if(root == NULL)
	return -1 ;
	return max(findHieght(root->left), findHieght(root->right)) + 1 ;
}

int main() {
	BstNode* root = NULL;  // Creating an empty tree
	/*Code to test the logic*/
	root = Insert(root,15);	
	root = Insert(root,10);	
	root = Insert(root,20);
	root = Insert(root,25);
	root = Insert(root,8);
	root = Insert(root,12);
	root = Insert(root,19);
	root = Insert(root,18);
	// Ask user to enter a number. 
	cout<<"min element it tree using itretive : "<<find_min_itritve(root)<<endl;
	cout<<"max element it tree using itretive : "<<find_max_itritve(root)<<endl;
	cout<<"min element it tree using recursive : "<<find_min_recursive(root)<<endl;
	cout<<"max element it tree using recursive : "<<find_max_recursive(root)<<endl;
	int number;
	cout<<"Enter number be searched\n";
	cin>>number;
	//If number is found, print "FOUND"
	if(Search(root,number) == true) cout<<"Found\n";
	else cout<<"Not Found\n";
	
	cout<<"hieht of BST is :"<<findHieght(root)<<endl;

}


