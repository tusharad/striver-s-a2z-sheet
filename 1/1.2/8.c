#include<stdio.h>

void main(){
	int n;
	printf("Enter n: ");
	scanf("%d",&n);
	int k = n;
	for(int i = 0;i < n;i++){
		for(int l = 0;l < i;l++){
			printf(" ");
		}
		k--;
		for(int j = 0;j < n+k-i;j++){
			printf("*");
		}
		printf("\n");
	}
}
