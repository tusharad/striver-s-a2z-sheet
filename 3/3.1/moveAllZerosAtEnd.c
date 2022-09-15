//Move all Zeros to the end of the array

#include<stdio.h>

void moveZeros2(int arr[],int n){
	int temp[n];
	int j = 0;
	for(int i = 0;i < n;i++){
		if(arr[i] != 0)
			temp[j++] = arr[i];
	}
	for(int i = 0;i < n;i++)
		arr[i]= temp[i];
}	

void moveZeros3(int arr[],int n){
	int k = 0;
	while(k < n){
		if(arr[k] == 0)
			break;
		else
			k++;
	}
	int i = k,j = k+1;
	int temp;
	while(i < n && j < n){
		if(arr[j] != 0){
			temp = arr[j];
			arr[j] = arr[i];
			arr[i] = temp;
			i++;	
		}
		j++;
	}
}

void moveZeros(int arr[],int n){
	int index = 0;
	for(int i = 0;i < n;i++){
		if(arr[i] != 0){
			arr[index] = arr[i];
			index++;
		}
	}
	for(int i = index;i < n;i++)
		arr[i]= 0;
}

void printArray(int arr[],int n){
	for(int i = 0;i < n;i++)
		printf("%d ",arr[i]);
	printf("\n");
}

void main(){
	int arr[] = {4,0,1,0,0,3,9,7};
	moveZeros(arr,8);	
	printArray(arr,8);
}

