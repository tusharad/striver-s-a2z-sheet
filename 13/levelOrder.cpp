vector<int> findSpiral(Node *root)
{
    vector<int>ans;
    if(!root) return ans;
    
    queue<Node*>q; q.push(root);
    
    bool flag = false;
    
    while(!q.empty())
    {
        vector<int>v;
        int x = q.size();
        for(int i=0;i<x;i++)
        {
            Node* nn = q.front(); q.pop();
            if(nn->left) q.push(nn->left);
            if(nn->right) q.push(nn->right);
            v.push_back(nn->data);
        }
        if(!flag)
        {
            reverse(v.begin() , v.end());
            ans.insert(ans.end() , v.begin() , v.end());
        }
        else
        {
            ans.insert(ans.end() , v.begin() , v.end());
        }
        flag = !flag;
    }
    return ans;
}
