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


// elso to find hieght of tree insteded findHieght function
int maxDepth(BstNode* node)  
{  
    if (node == NULL)  
        return -1;                     // insted of -1 you can using 1 in deffrent logic of hieght
    else
    {  
        /* compute the depth of each subtree */
        int lDepth = maxDepth(node->left);  
        int rDepth = maxDepth(node->right);  
      
        /* use the larger one */
        if (lDepth > rDepth)  
            return(lDepth + 1);  
        else return(rDepth + 1);  
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

	
	cout<<"hieht of BST is using findHieght(root) function :"<<findHieght(root)<<endl;
	cout<<"hieht of BST is using maxDepth(root) funtion :"<<maxDepth(root)<<endl;

}
