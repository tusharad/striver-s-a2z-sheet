#include<stdio.h>

void merge(int arr[],int low,int mid,int high){
	int temp[high+1];
	int i = low;
	int j = mid+1;
	int k = low;
	while(i <= mid && j <= high){
		if(arr[i] <= arr[j])
			temp[k++] = arr[i++];
		else
			temp[k++] = arr[j++];
	}
	while(i <= mid)
		temp[k++] = arr[i++];
	while(j <= high)
		temp[k++] = arr[j++];
	for(int i = low;i <= high;i++)
		arr[i] = temp[i];
}

void mergeSort(int arr[],int low,int high){
	if(low >= high)
		return;
	int mid = (low+high)/2;
	mergeSort(arr,low,mid);
	mergeSort(arr,mid+1,high);
	merge(arr,low,mid,high);
}

void printArray(int arr[],int n){
	for(int i = 0;i < n;i++)
		printf("%d ",arr[i]);
	printf("\n");
}

void main(){
	int arr[] = {4,1,3,9,7};
	printArray(arr,5);
	mergeSort(arr,0,4);
	printArray(arr,5);
}
