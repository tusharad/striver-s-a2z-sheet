// print something 1 to N times
#include<stdio.h>

void printN(int n){
	if(n == 0)
		return;
	printN(n-1);
	printf("%d ",n);
}

void main(){
	int n = 5;
	printN(n);
}
