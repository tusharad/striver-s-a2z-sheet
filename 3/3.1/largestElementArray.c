#include<stdio.h>

int largest(int arr[],int n){
	int max = arr[0];
	for(int i = 1;i < n;i++)
		if(arr[i] > max)
			max = arr[i];
	return max;
}

void main(){
	int arr[] = {4,1,3,9,7};
	printf("largest element is %d\n",largest(arr,5));
}
