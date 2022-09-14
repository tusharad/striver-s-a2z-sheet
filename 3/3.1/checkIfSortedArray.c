//check if array is sorted or not
#include<stdio.h>

int checkSorted(int arr[],int n){
	for(int i = 0;i < n-1;i++)
		if(arr[i] > arr[i+1])
			return 0;
	return 1;
}

void main(){
	int arr[] = {3,5,6,8,9};
	printf("%d ",checkSorted(arr,5));
}
