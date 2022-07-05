#include <stdio.h>
#include <string.h>

#define MAX 101

typedef struct Queue {
	char data[MAX];
	char front ;
	char rear ;
}queue;

void inti( queue *q){
	q->front = -1 ;
	q->rear = -1 ;
}

void enqueue( queue *q,char data){
	
	if (isFull(q)) {
		printf("queue full\n");
		return ;
	}
	
	else if (isEmpty(q)){
		q->rear= 0 ;
		q->front= 0 ;
	}
	else 
    q->rear =  (q->rear + 1)%MAX;
    
    	q->data[q->rear] = data ;
      
}

char dequeue(queue *q){
	char data ;
	if (isEmpty(q)) data = 0 ;
	
	else if (q->rear == q->front){
		data = q->data[q->front] ;
		q->rear= -1 ;
		q->front= -1 ;
	}
	else {
	data = q->data[q->front];
	q->front =  (q->front + 1)%MAX;
	 
   }
	 
	return data;
}

int isFull(queue *q){
	if((q->rear + 1)%MAX == (q->front)) return 1;
	return 0 ;
}

int isEmpty(queue *q){
	if((q->rear==-1 )&&(q->front==-1)) return 1;
	return 0 ;
}
int main(){
	
	queue q ;
	inti(&q);
	char i ;
	
	for(;i<101;i++){
		enqueue(&q,i);
	}
	enqueue(&q,'a');
	
		for(i = 0 ;i<101;i++){
		printf("%d\n",dequeue(&q));
	}
	
	
	return 99 ; 
}
