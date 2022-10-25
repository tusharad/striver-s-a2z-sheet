vector<int> kLargest(int arr[], int n, int k)
    {
        priority_queue<int,vector<int>,greater<int>> p;
        for(int i = 0;i < n;i++){
            p.push(arr[i]);
            if(p.size() > k)
                p.pop();
        }
        vector<int> res;
        for(int i = 0;i < k;i++){
            res.push_back(p.top());
            p.pop();
        }
        sort(res.begin(),res.end(),greater<int>());
        return res;
    }
