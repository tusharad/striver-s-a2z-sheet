#include<stdio.h>

void insertionSort(int arr[],int n){
	int key,j,temp;
	for(int i = 1;i < n;i++){
		key = arr[i];
		j = i-1;	
		while(j >= 0 && arr[j] > key){
			arr[j+1] = arr[j];
			j--;
		}
		arr[j+1] = key;
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
	insertionSort(arr,5);
	printArray(arr,5);
}
