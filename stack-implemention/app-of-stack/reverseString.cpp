#include<iostream>
#include <stack>
using namespace std;






struct Node{
	char data;
	struct Node* next;
};

/* block one */
void Insert_1(char data);
void print_1(void);
 Node *head = NULL;
 
 void reverse();


int main(){
	
	Insert_1('a');
	Insert_1('b');
	Insert_1('c');
	Insert_1('d');
	Insert_1('e');
	print_1();
	reverse();
	print_1();

	
return 0 ;	
}


/* block one */
void Insert_1(char data){
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

void reverse(){
	stack<struct Node*> s;
	if(head == NULL) return ;
	Node *temp = head ;
	while(temp){
		s.push(temp);
		temp = temp->next ;
	}
   
   temp = s.top();
   head = temp ;
   s.pop();
   while(! s.empty()){
   	temp->next = s.top();
   	s.pop();
   	temp = temp->next ;
   }
   
   temp->next = NULL ;
}
