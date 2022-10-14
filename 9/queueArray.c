//queue using array
#include<stdio.h>
#include<stdlib.h>

struct queue{
	int data[10];
	int front,rear;
};

struct queue* init(){
	struct queue* temp = malloc(sizeof(struct queue));
	temp->front = temp->rear = -1;
	return temp;
}

int isEmpty(struct queue* q){
	return q->front == -1;
}

void push(struct queue* q,int data){
	if(isEmpty(q))
		q->front = 0;
	q->data[++q->rear] = data;
}

int pop(struct queue* q){
	if(isEmpty(q) || q->front == q->rear+1){
		printf("queue is underflow\n");
		return -1;
	}
	int temp = q->data[q->front];
	q->front++;
	return temp;
}

void main(){
	struct queue* q = init();
	push(q,10);
	push(q,20);
	push(q,30);
	push(q,40);
	printf("%d\n",pop(q));
	printf("%d\n",pop(q));
	printf("%d\n",pop(q));
	printf("%d\n",pop(q));
	printf("%d\n",pop(q));
}
