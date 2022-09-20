//{ Driver Code Starts

#include <bits/stdc++.h>

using namespace std;

pair<int, int> getFloorAndCeil(int arr[], int n, int x);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        auto ans = getFloorAndCeil(arr, n, x);
        cout << ans.first << " " << ans.second << "\n";
    }
    return 0;
}

// } Driver Code Ends


pair<int, int> getFloorAndCeil(int arr[], int n, int x) {
    pair<int,int> res;
    int f = -1;
    int c = 100000;
    for(int i = 0;i < n;i++){
        if(arr[i] <= x)
            f = max(arr[i],f);
        if(arr[i] >= x)
            c = min(arr[i],c);
    }
    if(c == 100000)
        c = -1;
    return {f,c};
}
