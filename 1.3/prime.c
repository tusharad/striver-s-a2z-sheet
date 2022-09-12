// Program to check if n is prime or not

#include<stdio.h>

int checkPrime(int n){
	for(int i = 2;i < n;i++)
		if(n%i == 0)
			return 0;
	return 1;
}

void main(){
	int n = 9;
	printf("%d\n",checkPrime(n));
}
