#include<stdio.h>

void main(){
	int n;
	printf("Enter n: ");
	scanf("%d",&n);
	int k = 1;
	for(int i = 0;i < n;i++){
		for(int l = 0;l < n-i-1;l++){
			printf(" ");
		}
		for(int j = 0;j < i+k;j++){
			printf("*");
		}
		k++;
		printf("\n");
	}
}
