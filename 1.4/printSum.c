// print something 1 to N times
#include<stdio.h>

int printN(int n,int sum){
	if(n == 0)
		return sum;
	printN(n-1,sum+n);
}

void main(){
	int n = 5;
	printf("%d ",printN(n,0));
}
