// print something 1 to N times
#include<stdio.h>

int checkPalindrome(char *str,int i,int n){
	if(str[i] == '\0')
		return 1;
	if(str[i] != str[n])
		return 0;
	return checkPalindrome(str,i+1,n-1);
}

void main(){
	char* str = "madam1";
	printf("%d ",checkPalindrome(str,0,4));
}
