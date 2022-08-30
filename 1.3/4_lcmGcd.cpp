//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    long long gcd(long long a,long long b){
        if(b == 0)
            return a;
        return gcd(b,a%b);
    }
  
    long long lcm(long long a,long long b){
        long long temp = a%b;
        if(temp == 0)
            return a;
        return a * lcm(b,temp)/temp;
    }
  
    vector<long long> lcmAndGcd(long long A , long long B) {
        vector<long long>res;
        long long g = gcd(A,B);
        res.push_back(A*B/g);
        res.push_back(g);
        return res;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long A,B;
        
        cin>>A>>B;

        Solution ob;
        vector<long long> ans = ob.lcmAndGcd(A,B);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}
// } Driver Code Ends
