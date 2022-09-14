// print something 1 to N times
#include<stdio.h>

int fibo(int n){
	if(n < 2)
		return n;
	return fibo(n-1)+fibo(n-2);
}

void main(){
	int n = 5;
	printf("%d",fibo(n));
}
