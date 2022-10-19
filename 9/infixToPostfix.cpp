#include<bits/stdc++.h>
using namespace std;

int pred(char ch){
	if(ch == '^')
		return 3;
	if(ch == '*' || ch == '/')
		return 2;
	if(ch == '+' || ch == '-')
		return 1;
	return -1;
}

string infToPos(string inf){
	stack<char> st;
	string res = "";
	for(int i = 0;inf[i] != '\0';i++){
		if((inf[i] >= 'a' && inf[i] <= 'z') || (inf[i] >= 'A' && inf[i] <= 'Z'))
			res += inf[i];
		else if(inf[i] != '(' && inf[i] != ')'){
			if(!st.empty() && pred(st.top()) <= pred(inf[i]))
				st.push(inf[i]);
			else{
				while(!st.empty() && pred(st.top()) >= pred(inf[i])){
					res += st.top();
					st.pop();
				}
				st.push(inf[i]);
			}
		}
		else if(inf[i] == '('){
			st.push(inf[i]);
		}else if(inf[i] == ')'){
			while(st.top() != '('){
				res += st.top();
				st.pop();
			}
			st.pop();
		}
	}
	while(!st.empty()){
		res += st.top();
		st.pop();
	}
	return res;
}


int main(){
	string inf = "a+b*(c^d-e)^(f+g*h)-i";
	cout<<infToPos(inf)<<endl;
	return 0;
}
