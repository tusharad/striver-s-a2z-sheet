#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

struct stack{
	int data[100];
	int top;
	int min;
};

struct stack* init(){
	struct stack* temp = malloc(sizeof(struct stack));
	temp->top = -1;
	temp->min = INT_MAX;
}

int isEmpty(struct stack* s){
	return s->top == -1;
}

void push(struct stack* s,int data){
	if(isEmpty(s)){
		s->data[++s->top] = data;
		s->min = data;
	}else{
		if(data < s->min){
			s->data[++s->top] = (2*data - s->min);
			s->min = data;
		}else{
			s->data[++s->top] = data;
		}
	}
}

int pop(struct stack* s){
	if(isEmpty(s))
		return -1;
	if(s->data[s->top] < s->min){
		int temp = s->min;
		s->min = 2*s->min - s->data[s->top];
		s->top--;
		return temp; 
	}else{
		return s->data[s->top--];	
	}
}

int getMin(struct stack* s){
	return s->min;
}

void main(){
	struct stack* s = init();
	push(s,20);
	push(s,30);
	push(s,10);
	push(s,15);
	printf("min is %d\n",getMin(s));
	printf("popped is %d\n",pop(s));
	printf("min is %d\n",getMin(s));
	printf("popped is %d\n",pop(s));
	printf("min is %d\n",getMin(s));
}
