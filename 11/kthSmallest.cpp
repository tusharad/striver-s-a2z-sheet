    int kthSmallest(int arr[], int l, int r, int k) {
priority_queue<int> p;
for(int i = 0;i <= r;i++){
    p.push(arr[i]);
    if(p.size() > k)
	p.pop();
}
return p.top();
}
