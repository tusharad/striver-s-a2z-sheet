// print something 1 to N times
#include<stdio.h>

int fact(int n){
	if(n == 1)
		return n;
	return n*fact(n-1);
}

void main(){
	int n = 5;
	printf("%d",fact(n));
}
