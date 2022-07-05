#include<stdio.h>
#include<stdlib.h>

struct Node {
	int data;
	struct Node* next;
};

struct Node* head = NULL;
void Inserte(int data,int number){
   
   	struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));	
   	newNode->data = data;
   	newNode->next = NULL;
   	if(number == 1) {
   	newNode->next = head;
   	head = newNode;
   		return;
	   }
	struct Node *temp = head;
	int count;   
   for( count = 0; count < number -2; count++)	{
   	
   	  temp = temp->next ;
   }
   newNode->next = temp->next ;
   temp->next = newNode;
   
}

void print(void){
	struct Node *traverse = head;
	printf(" List is :") ;
	while(traverse != NULL){
	
		printf("%d ",traverse->data) ;
		traverse = traverse->next ;
	}
	printf("\n");
}

int main(){
	
	
	Inserte(3,1);  //list :3
	Inserte(2,2);  //list :3 2
	Inserte(4,1);  // list : 4 3 2
	Inserte(9,1);  // list : 9 4 3 2
	print();
	
}
