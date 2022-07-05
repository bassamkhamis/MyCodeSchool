#include<stdio.h>
#include<stdlib.h>

struct Node{
	int data;
	struct Node* next;
	struct Node* prev;
};

/*globale section */
struct Node* head = NULL;
struct Node* tail = NULL;

struct Node* getNewNode(int data);
void InserteAtHead(int data);
void InserteAtTail(int data);
void printForward(void);
void printBackward(void);

int main(){
	
	
	
	InserteAtHead(33);  //33
	InserteAtHead(22);  // 22 33
	InserteAtHead(11);  // 11 22 33
	printBackward();   //33 22 11
	printForward();    // 11 22 33
	InserteAtTail(44); // 11 22 33 44
	InserteAtTail(55); //11 22 33 44 55
	InserteAtTail(66); //11 22 33 44 55 66
	printBackward();   // 66 55 44 33 22 11
	printForward();    // 11 22 33 44 55 66 
	
	
return 44 ;
	
}

struct Node* getNewNode(int data){
	struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
	newNode->data = data ;
	newNode->next = NULL ;
	newNode->prev = NULL ;
return newNode ;	
}
void InserteAtHead(int data){
	struct Node* newNode = getNewNode(data) ;
	if(head == NULL && tail == NULL){                           // if duble linked list is empty 
		head = newNode ;
		tail = newNode ;
		return ;
	}
	newNode->next = head ;
	head->prev = newNode ;
	head = newNode ;
}

void InserteAtTail(int data){
		struct Node* newNode = getNewNode(data) ;
		
	if(head == NULL && tail == NULL){                           // if duble linked list is empty 
		head = newNode ;
		tail = newNode ;
		return ;
	}
	
	newNode->prev = tail ;
	tail->next = newNode ;
	tail = newNode ;
}

void printForward(){
		struct Node* ptr = head ;
		while (ptr){
			printf("%d ",ptr->data) ;
			ptr = ptr->next ;
		}
		
		printf("\n") ;
	
}

void printBackward(){
		struct Node* ptr = tail ;
	
	while (ptr){
			printf("%d ",ptr->data) ;
			ptr = ptr->prev ;
		}
		
		printf("\n") ;
}
