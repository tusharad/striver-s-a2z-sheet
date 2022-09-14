// c program to count the frequency of all elements in the array
#include<stdio.h>

void printArray(int arr[],int n){
	int visited[n];
	for(int i = 0;i < n;i++)
		visited[i] = 0;
	int cnt;
	for(int i = 0;i < n;i++){
		if(visited[i] == 1)
			continue;
		cnt = 1;
		for(int j = i+1;j < n;j++){
			if(arr[i] == arr[j]){
				visited[j] = 1;
				cnt++;	
			}
		}
		printf("%d %d\n",arr[i],cnt);	
	}
}

void main(){
	int arr[] = {4,1,3,9,7};
	printArray(arr,4);
}
