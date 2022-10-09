string reverseWords(string S) 
    { 
        stack<string> s1;
        string temp = "";
        string res = "";
        for(int i = 0;i < S.length();i++){
            if(S[i] == '.'){
                s1.push(temp);
                temp = "";
            }
            else
                temp += S[i];
        }
        s1.push(temp);
        do{
            res += s1.top();
            s1.pop();
            if(!s1.empty())
                res += ".";
        }while(!s1.empty());
        return res;
    } 
