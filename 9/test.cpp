#include<bits/stdc++.h>
using namespace std;

int main(){
	queue<int> q1;
	q1.push(10);
	q1.push(20);
	q1.push(30);
	printf("at front %d\n",q1.front());
	q1.pop();
	printf("at front %d\n",q1.front());
}
