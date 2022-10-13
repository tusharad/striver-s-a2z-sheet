//stack implementation using array
#include<stdio.h>
#include<stdlib.h>

struct stack{
    int data[10];
    int top;
};

struct stack* init(){
    struct stack* temp = malloc(sizeof(struct stack));
    temp->top = -1;
    return temp;
}

int isEmpty(struct stack* s){
    return (s->top == -1)? 1 : 0;
}

int isFull(struct stack *s){
    return s->top == 9;
}

void push(struct stack* s,int data){
    if(isFull(s)){
        printf("stack overflow!\n");
        return;
    }
    s->data[++s->top] = data;
}

int pop(struct stack* s){
    if(isEmpty(s)){
        printf("Stack underflow!");
        return -1;
    }
    return s->data[s->top--];
}

void printStack(struct stack* s){
    for(int i = s->top;i >= 0;i--)
        printf("%d ",s->data[i]);
    printf("\n");
}

void main(){
    struct stack* s = init();
    push(s,10);
    push(s,12);
    printStack(s);
}