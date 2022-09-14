//Remove duplicate elements from a sorted array without using any extra memory
#include<stdio.h>

int removeDuplicates(int arr[],int n){
	int index = 0;
	for(int i = 0;i < n;i++){
		if(arr[index] != arr[i]){
			index++;
			arr[index] = arr[i];
		}
	}	
	return index+1;
}

void printArray(int arr[],int n){
	for(int i = 0;i < n;i++)
		printf("%d ",arr[i]);
	printf("\n");
}

void main(){
	int arr[] = {1,3,3,3,5,9};
	int n = removeDuplicates(arr,6);
	printArray(arr,n);
}
