#include<stdio.h>

int linear(int arr[],int n,int k){
	for(int i = 0;i < n;i++)
		if(arr[i] == k)
			return 1;
	return 0;
}

void main(){
	int arr[] = {4,1,3,9,7};
	printf("%d ",linear(arr,5,23));
}
