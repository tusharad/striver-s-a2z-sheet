#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node* next;
};

struct node* front = NULL;
struct node* rear = NULL;

int isEmpty(){
	return front == NULL;
}

void enqueue(int data){
	struct node* temp = malloc(sizeof(struct node));
	temp->data = data;
	if(!front && !rear){
		front = temp;
		rear = temp;
	}else{
		rear->next = temp;
		rear = temp;
	}
}

int dequeue(){
	if(!front){
		printf("queue underflow\n");
		return -1;
	}
	struct node* temp = front;
	int val = front->data;
	front = front->next;
	free(temp);
	return val;
}

void main(){
	enqueue(10);
	enqueue(20);
	enqueue(30);
	printf("%d\n",dequeue());
	printf("%d\n",dequeue());
	printf("%d\n",dequeue());
	printf("%d\n",dequeue());
}
