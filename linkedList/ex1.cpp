#include <stdio.h>
#include<stdlib.h>


struct Node{
	int data;
	struct Node* next;
};

/* block one */
void Insert_1(int data);
void print_1(void);
struct Node *head = NULL;

/*block two */
Node*  Insert_2(struct Node *, int data);
void print_2(struct Node* );
/* block tow */
void Insert_3(struct Node **, int data);
void print_3(struct Node* );

int main (){
	struct Node *head2 = NULL;
	int counter,data,number;
	printf("enter number element : ");
	scanf("%d",&number);
	
	for(counter = 0 ; counter < number ; counter++){
	
	printf("enter number : %d: ",counter+1);
	scanf("%d",&data)	;
    Insert_3(&head2,data);
	print_3(head2);
			
	}
	
	return 0;
}
/* block one */
void Insert_1(int data){
	struct Node *newNode = (Node *)malloc(sizeof(Node));
	newNode->data = data ;
	newNode->next = head ;
	head = newNode ;
}

void print_1(void){
	struct Node *traverse = head;
	printf(" List is :") ;
	while(traverse != NULL){
	
		printf("%d ",traverse->data) ;
		traverse = traverse->next ;
	}
	printf("\n");
}

/* block tow */

 Node* Insert_2( Node* head ,int data){
	struct Node *newNode = (Node *)malloc(sizeof(Node));
	newNode->data = data ;
	newNode->next = head ;
	head = newNode ;
	
	return head;
}

void print_2( Node* head){
//	struct Node *traverse = head;
	printf(" List is :") ;
	while(head != NULL){
	
		printf("%d ",head->data) ;
		head = head->next ;
	}
	printf("\n");
}
/* block three  */
void Insert_3(Node **head, int data){
	
	struct Node *newNode = (Node *)malloc(sizeof(Node));
	newNode->data = data ;
	newNode->next = *head ;
	*head = newNode ;
	
}
void print_3( Node* head){
//	struct Node *traverse = head;
	printf(" List is :") ;
	while(head != NULL){
	
		printf("%d ",head->data) ;
		head = head->next ;
	}
	printf("\n");
}


