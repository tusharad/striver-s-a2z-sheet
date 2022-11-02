
void traverse(Node* root,vector<int> &res){
    if(root == NULL)
        return;
    res.push_back(root->data);
    traverse(root->left,res);
    traverse(root->right,res);
}

vector<int> preorder(Node* root)
{
    vector<int> res;
    traverse(root,res);
    return res;
}
