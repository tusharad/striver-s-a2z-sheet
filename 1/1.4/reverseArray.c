#include<stdio.h>

void reverse(int arr[],int n){
	if(n == -1)
		return;
	printf("%d ",arr[n]);
	reverse(arr,n-1);
}

void main(){
	int arr[] = {4,1,3,9,7};
	reverse(arr,4);
}
