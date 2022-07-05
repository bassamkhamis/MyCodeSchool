#include <iostream>
//#include <stdio.h>
//#include<cstdlib>
#include<stack>
using namespace std;




struct Node{
	int data;
	struct Node* next;
};

/* block one */
void Insert_1(char data);
void print_1(void);
 Node *head = NULL;


int main(){
	
	Insert_1('a');
	Insert_1('b');
	Insert_1('c');
	Insert_1('d');
	Insert_1('e');
	
	
return 0 ;	
}


/* block one */
void Insert_1(int data){
	 Node *newNode =new Node();
	newNode->data = data ;
	newNode->next = head ;
	head = newNode ;
}

void print_1(void){
	struct Node *traverse = head;
	//printf(" List is :") ;
	
	cout<<" List is :"<<endl;
	while(traverse != NULL){
	
	//	printf("%d ",traverse->data) ;
	cout<<traverse->data;
		traverse = traverse->next ;
	}
	//printf("\n");
	cout<<endl;
}
