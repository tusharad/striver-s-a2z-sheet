#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* next;
};

struct node* top = NULL;

int isEmpty(){
    return top == NULL;
}

void push(int data){
    struct node* temp = malloc(sizeof(struct node));
    temp->data = data;
    temp->next = top;
    top = temp;
}

int pop(){
    if(isEmpty())
        return -1;
    struct node* temp = top;
    top = top->next;
    int num = temp->data;
    free(temp);
    return num;
}

void printStack(){
    struct node* curr = top;
    while(curr != NULL){
        printf("%d ",curr->data);
        curr = curr->next;
    }
}

void main(){
    push(10);
    push(20);
    push(30);
    printf("%d\n",pop());
    printStack();
}