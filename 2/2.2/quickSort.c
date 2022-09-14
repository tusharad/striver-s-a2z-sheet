#include<stdio.h>

void swap(int arr[],int x,int y){
	int temp = arr[x];
	arr[x] = arr[y];
	arr[y] = temp;
}

int partition(int arr[],int low,int high){
	int i = low;
	int j = high;
	int pivot = arr[high];
	while(i < j){
		if(arr[i] <= pivot) i++;
		if(arr[j] > pivot) j--;
		if(i < j) swap(arr,i,j);
	}
	swap(arr,i,high);
	return i;
}

void quickSort(int arr[],int low,int high){
	if(low >= high)
		return;
	int i = partition(arr,low,high);
	quickSort(arr,low,i-1);
	quickSort(arr,i+1,high);
}

void printArray(int arr[],int n){
	for(int i = 0;i < n;i++)
		printf("%d ",arr[i]);
	printf("\n");
}

void main(){
	int arr[] = {4,1,3,9,7};
	printArray(arr,5);
	quickSort(arr,0,4);
	printArray(arr,5);
}
