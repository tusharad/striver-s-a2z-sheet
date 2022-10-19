#include<stdio.h>

void swap(int arr[],int x,int y){
	int temp = arr[x];
	arr[x] = arr[y];
	arr[y] = temp;
}

int partition(int arr[],int start,int end){
	int pivot = arr[end];
	int pivot_index = start;
	
	for(int i = start;i < end;i++){
		if(arr[i] <= pivot){
			swap(arr,i,pivot_index);
			pivot_index++;
		}
	}

	swap(arr,pivot_index,end);
	return pivot_index;
}

void quickSort(int arr[],int start,int end){
	if(start >= end)
		return;
	int i = partition(arr,start,end);
	quickSort(arr,start,i-1);
	quickSort(arr,i+1,end);
}

void printArray(int arr[],int n){
	for(int i = 0;i < n;i++)
		printf("%d ",arr[i]);
	printf("\n");
}

void main(){
	int arr[] = {7,2,1,6,8,5,3,4};
	int n = 8;
	quickSort(arr,0,n-1);
	printArray(arr,n);
}
