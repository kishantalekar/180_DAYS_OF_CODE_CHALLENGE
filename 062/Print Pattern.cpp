//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
int tillMinus(int N,vector<int>&ans){
    if(N <=0){
        return N;
    }
        ans.push_back(N);
        return tillMinus(N-5,ans);
    
}
void tillItReachesN(int n,int N,vector<int>&ans){
    if(n == N){
        ans.push_back(n);
        return;
    }else{
        ans.push_back(n);
       return tillItReachesN(n+5,N,ans);
    }
}
class Solution{
public:
    vector<int> pattern(int N){
        // code here
        vector<int>ans;
        
        int n =tillMinus(N,ans);
        
        tillItReachesN(n,N,ans);
        
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        
        Solution ob;
        vector<int> ans = ob.pattern(N);
        for(int u: ans)
            cout<<u<<" ";
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends