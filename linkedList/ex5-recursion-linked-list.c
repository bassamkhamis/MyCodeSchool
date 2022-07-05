#include<stdio.h>
#include<stdlib.h>

struct Node{
	int data;
	struct Node* next;
};

/*block two */
struct Node*  Insert_2(struct Node *, int data);
void print_2(struct Node* );
struct Node* reverse (struct Node* );
void reverse_2(struct Node*);

int main (){
	struct Node *head = NULL;

    head = Insert_2(head , 2);
    head = Insert_2(head , 22);
    head = Insert_2(head , 222);
    head = Insert_2(head , 2222);
    head = Insert_2(head , 22222);
    print_2(head);
   head = reverse(head);
   print_2(head);
    
    
    
    
 return 99 ;   
}


/* block tow */

 struct Node* Insert_2( struct Node* head ,int data){
	struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
	newNode->data = data ;
	newNode->next = head ;
	head = newNode ;
	
	return head;
}


void print_2(struct Node* head){
	if(head == NULL) {
		printf("\n");
		return;
	}
	printf("%d ",head->data);
	print_2(head->next);	
}

struct Node* reverse (struct Node* p ){
	static struct Node* head ;
	
	if( p->next==NULL ){
		head = p ;
		return head ;
	}
reverse ( p->next );
struct Node* Q = p->next;
Q->next = p ;
p->next = NULL ;
		
return head	;
}

void reverse_2(struct Node*){     /* use with globale vairble only */
	if( p->next==NULL ){
		head = p ;
		return  ;
	}
reverse ( p->next );
struct Node* Q = p->next;
Q->next = p ;
p->next = NULL ;
}
