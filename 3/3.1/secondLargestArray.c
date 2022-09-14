#include<stdio.h>

int largest(int arr[],int n){
	int max = arr[0];
	int max2 = -1;
	for(int i = 1;i < n;i++){
		if(arr[i] > max){
			max2 = max;
			max = arr[i];
		}else if(arr[i] > max2)
			max2 = arr[i];

	}
	return max2;
}

void main(){
	int arr[] = {4,1,3,9,7};
	printf("largest element is %d\n",largest(arr,5));
}
