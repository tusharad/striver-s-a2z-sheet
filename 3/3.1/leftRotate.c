//Left Rotate the Array by One
#include<stdio.h>

int leftRotate(int arr[],int n){
	int temp = arr[0];
	for(int i = 0;i < n-1;i++)
		arr[i] = arr[i+1];
	arr[n-1] = temp;
}

void printArray(int arr[],int n){
	for(int i = 0;i < n;i++)
		printf("%d ",arr[i]);
	printf("\n");
}

void main(){
	int arr[] = {4,1,3,9,7};
	leftRotate(arr,5);
	printArray(arr,5);
}
