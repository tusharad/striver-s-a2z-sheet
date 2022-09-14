#include<stdio.h>

void bubbleSort(int arr[],int n){
	int temp;
	for(int i = 0;i < n;i++){
		for(int j = 0;j < n-1;j++){
			if(arr[j] > arr[j+1]){
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
}

void printArray(int arr[],int n){
	for(int i = 0;i < n;i++)
		printf("%d ",arr[i]);
	printf("\n");
}

void main(){
	int arr[] = {4,1,3,9,7};
	printArray(arr,5);
	bubbleSort(arr,5);
	printArray(arr,5);
}
