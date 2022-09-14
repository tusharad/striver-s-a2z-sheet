//Left Rotate the Array by d places
#include<stdio.h>

void reverse(int arr[],int start,int end){
	int temp;	
	while(start <= end){
		temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;
		start++;
		end--;
	}
}

int leftRotate(int arr[],int n,int d){
	reverse(arr,0,d-1);
	reverse(arr,d,n-1);
	reverse(arr,0,n-1);
}

void printArray(int arr[],int n){
	for(int i = 0;i < n;i++)
		printf("%d ",arr[i]);
	printf("\n");
}

void main(){
	int arr[] = {4,1,3,9,7};
	leftRotate(arr,5,2);
	printArray(arr,5);
}
