    void enqueue(int x) {
        input.push(x);
    }

    int dequeue() {
        if(input.empty())
            return -1;
        while(!input.empty()){
            output.push(input.top());
            input.pop();
        }
        int temp = output.top();
        output.pop();
        while(!output.empty()){
            input.push(output.top());
            output.pop();
        }
        return temp;
    }
