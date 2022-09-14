#include<stdio.h>

void selectionSort(int arr[],int n){
	int min,temp;
	int min_index;
	for(int i = 0;i < n - 1;i++){
		min = arr[i+1];
		min_index = i+1;
		for(int j = i+1;j < n;j++){
			if(arr[j] < min){
				min = arr[j];
				min_index = j;
			}
		}
		temp = arr[min_index];
		arr[min_index] = arr[i];
		arr[i] = temp;
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
	selectionSort(arr,5);
	printArray(arr,5);
}
