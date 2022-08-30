#include<stdio.h>

void main(){
	int n;
	printf("Enter n: ");
	scanf("%d",&n);
	for(int i = 1;i <= n;i++){
		for(int j = 1;j <= i;j++)
			printf("%d",j);
		for(int j = 1;j <= 2*n-(2*i);j++)
			printf(" ");
		for(int j = i;j > 0;j--)
			printf("%d",j);
		printf("\n");
	}
}
