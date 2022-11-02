#include<bits/stdc++.h>
using namespace std;

struct node{
	int data;
	struct node* left;
	struct node* right;
};

struct node* createNode(int data){
	struct node* temp = new node;
	temp->data = data;
	return temp;
}


    vector<int> preOrder(Node* root)
    {
        vector<int> res;
        if(root == NULL) return res;
        stack<Node *> st;
        st.push(root);
        while(!st.empty()){
            root = st.top();
            st.pop();
            res.push_back(root->data);
            if(root->right != NULL)
                st.push(root->right);
            if(root->left != NULL)
                st.push(root->left);
        }
        return res;
    }

int main(){
	struct node* root = createNode(10);
	root->left = createNode(20);
	root->right = createNode(30);
	root->left->left = createNode(40);
	root->left->right = createNode(50);
	root->right->left = createNode(60);
	root->right->right = createNode(70);
	iterative_preorder(root);
	return 0;
}
