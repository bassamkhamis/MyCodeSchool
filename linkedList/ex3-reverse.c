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
void reverse(void);

int main(){
	
	
	Insert_1(11);
	Insert_1(12);
	Insert_1(13);
	Insert_1(14);
	print_1();
    reverse();
	print_1();
	
  return 22;	
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

void reverse(){
	
	struct Node *current = head, *prev = NULL, *next;
	
	while(current != NULL){
		next = current->next ;
		current->next = prev ;
		prev = current ;
		current = next ;
	
	}
	
	head = prev ;
}
