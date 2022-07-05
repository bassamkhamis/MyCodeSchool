#include<stdio.h>
#include<stdlib.h>

struct Node{
	int data;
	struct Node* next;
};

struct Node* top = NULL ;
void push(int data);

int Top();
int IsEmpty();

int main(){
	
	
	push(33);
	printf("%d\n",Top());
	push(22);
	printf("%d\n",Top());
	pop();
	printf("%d\n",Top());
	printf("is empty %d\n",IsEmpty());
return 22 ;
	
}

void push(int data){
	struct Node* ptr = (struct Node* )malloc(sizeof(struct Node)) ;
	ptr->data = data ;
	ptr->next = top ;
	top = ptr ;
	
}

void pop(){
	
	if( !top ) return ;
struct Node* temp = top ;
top = top->next;

free(temp)	;
	
}

int Top(){
	if( !top ) return ;
	return top->data ;
}

int IsEmpty(){
	
	return !top ;
}
