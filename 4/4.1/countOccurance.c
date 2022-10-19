#include<stdio.h>

int lowerBound(int arr[],int n,int num){
	int low = 0;
	int high = n-1;
	int result = -1;
	while(low <= high){
		int mid = (low+high)/2;
		if(arr[mid] == num){
			result = mid;
			high = mid-1;
		}else if(arr[mid] < num){
			low = mid+1;
		}else{
			high = mid-1;
		}
	}
	return result;
}


int upperBound(int arr[],int n,int num){
	int low = 0;
	int high = n-1;
	int result = -1;
	while(low <= high){
		int mid = (low+high)/2;
		if(arr[mid] == num){
			result = mid;
			low = mid+1;
		}else if(arr[mid] < num){
			low = mid+1;
		}else{
			high = mid-1;
		}
	}
	return result;
}

int countOccurance(int arr[],int n,int num){
	return upperBound(arr,n,num)-lowerBound(arr,n,num)+1;
}

void main(){
	int arr[] = {1,2,3,3,3,5,5,5,6};
	int n = 9;
	int num = 6;
	printf("Occurancre of %d is %d\n",num,countOccurance(arr,n,num));
}
