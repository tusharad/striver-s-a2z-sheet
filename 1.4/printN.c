// print somthing n times
#include<stdio.h>

void printN(char str[],int n){
	if(n == 0)
		return;
	printf("%s\n",str);
	printN(str,n-1);
}

void main(){
	int n = 5;
	printN("hello",n);
}
