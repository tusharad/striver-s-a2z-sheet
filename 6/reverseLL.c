#include<stdio.h>

struct node{
	int data;
	struct node* next;
};

struct node* newNode(int x){
	struct node* temp = malloc(sizeof(struct node));
	temp->data = x;
	temp->next = NULL;
	return temp;
}

struct node* reverseLL(struct node* head){
	struct node* prev = NULL;
	struct node* curr = head;
	struct node* next = NULL;
	while(curr){
		next = curr->next;
		curr->next = prev;
		prev = curr;
		curr = next;
	}
	return prev;
}

struct node* reverseRecursive(struct node* head,struct node* prev){
	if(!head)
		return prev;
	struct node* temp = head->next;
	head->next = prev;
	reverseRecursive(temp,head);
}

void printLL(struct node* head){
	struct node* curr = head;
	while(curr != NULL){
		printf("%d->",curr->data);
		curr = curr->next;	
	}
	printf("\n");
}

int checkLoop(struct node* head){
	struct node* curr= head;
	map<struct node* head,int> mp;
	while(curr){
		if(mp[curr->next] == 0)
			mp[curr->next] = 1;
		else
			return 0;
		curr = curr->next;
	}
	return 1;
}

void main(){
	struct node* head = newNode(10);
	struct node* two = newNode(20);
	struct node* three = newNode(30);
	struct node* four = newNode(40);
	
	head->next = two;
	two->next = three;
	three->next = two;

	printf("%d\n",checkLoop(head));
	//head = reverseLL(head);
	//head = reverseRecursive(head,NULL);
	//printLL(head);
}
