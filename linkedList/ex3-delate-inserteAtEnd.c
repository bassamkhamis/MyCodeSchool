#include<stdio.h>
#include<stdlib.h>

struct Node{
	int data;
	struct Node* next;
};

/* block one */
void Insert_1(int data);
void print_1(void);
struct Node *head = NULL;
void Insert_atEnd(int data);

void deleteByvalue(int data){
	struct Node *pointer1 = head ;
//	struct Node *pointer2 = head ;

	if(pointer1->data==data) {
		head = head->next ;
		free(pointer1);
		
	}
	else {
	
	while(pointer1 != NULL && pointer1->next->data != data){
		pointer1 = pointer1->next ;
	}
   struct Node *pointer2 = pointer1->next;
   pointer1->next = pointer2->next ;
   free(pointer2);
 }
}

void deleteByNumber(int number){
		struct Node *pointer1 = head ;
	if(number == 1){
		head = head->next;
		free(pointer1);
		return;
	}
	
	int counter= 0 ;
	for(;counter < number-2 ; counter++){	
pointer1=pointer1->next	;
	}
struct Node *pointer2 = pointer1->next ;
 pointer1->next = pointer2->next ;
 free(pointer2) ;
}
int main(){
	Insert_1(11);
	Insert_1(22);
	Insert_1(33);
	Insert_1(44);
	Insert_atEnd(55);
	print_1();
	
   deleteByvalue(33);
   print_1();
    
   deleteByvalue(11);
   print_1();
   
   deleteByNumber(1);
  	print_1();
   
	
	
}


/* block one */
void Insert_1(int data){
	struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
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

void Insert_atEnd(int data){
		struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
		newNode->data = data ;
		newNode->next = NULL;
		
		struct Node *traverse = head;
		while(traverse->next != NULL){
			traverse = traverse->next ;
		}
		
	  traverse->next = newNode ;
}
