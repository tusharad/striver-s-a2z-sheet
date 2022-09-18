//Given an array and a sum k, we need to print the length of the longest subarray that sums to k.
//this approach does not work for negative numbers
#include<stdio.h>

int longest(int arr[],int n,int k){
	int maxLength = 0;
	int sum;
	for(int i = 0;i < n;i++){
		sum = 0;
		for(int j = i;j < n;j++){
			sum += arr[j];
			if(sum == k){
				if(maxLength < (j-i+1))
					maxLength = (j-i+1);
			}
		}
	}
	return maxLength;
}

int longest2(int arr[],int n,int k){
	int i = 0,sum = 0,maxLength = 0,j = -1;
	while(i < n){
		while((j+1 < n) && (sum + arr[j+1] <= k))
			sum += arr[++j];
		if(sum == k)
			if(maxLength < (j-i+1))
				maxLength = (j-i+1);
		sum -= arr[i];
		i++;
	}
	return maxLength;
}

void main(){
	int arr[] = {7,1,6,0};
	int k = 7;
	printf("Longest %d\n",longest(arr,4,k));
}
