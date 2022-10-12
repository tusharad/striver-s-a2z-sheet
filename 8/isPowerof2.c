#include<stdio.h>

int isPower(int n){
	return ((n != 0) && ((n & (n-1)) == 0));
}

void main(){
	int n = 2;
	printf("%d\n",isPower(n));
}
