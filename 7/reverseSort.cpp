    stack<int> res;
    stack<int> Reverse(stack<int> &St){
        if(St.empty())
            return res;
        res.push(St.top());
        St.pop();
        return Reverse(St);
    }
