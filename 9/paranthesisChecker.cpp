    bool ispar(string x)
    {
        stack<char> s;
        for(int i = 0;x[i] != '\0';i++){
            if(x[i] == '{' || x[i] == '(' || x[i] == '[')
                s.push(x[i]);
            
            if(x[i] == '}'){
                if(s.empty() || s.top() != '{')
                    return false;
                else
                    s.pop();
            }
            
            if(x[i] == ')'){
                if(s.empty() || s.top() != '(')
                    return false;
                else
                    s.pop();
            }
            
            if(x[i] == ']'){
                if(s.empty() || s.top() != '[')
                    return false;
                else
                    s.pop();
            }
        }
        if(s.empty())
            return true;
        return false;
    }
