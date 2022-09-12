// print something 1 to N times
#include<stdio.h>

void printN(int n){
	if(n == 0)
		return;
	printf("%d ",n);
	printN(n-1);
}

void main(){
	int n = 5;
	printN(n);
}
