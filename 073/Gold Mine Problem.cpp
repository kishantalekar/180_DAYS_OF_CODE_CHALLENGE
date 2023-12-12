//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:

    int recur(vector<vector<int>>arr,int i,int j){
        int n = arr.size();
        int m = arr[0].size();
        if(i < 0 || j >=m || i >=n)return 0;
        
        int diagonalUp = recur(arr,i-1,j+1);
        int right = recur(arr,i,j+1);
        int diagonalDown = recur(arr,i+1,j+1);
        
        return max(diagonalUp,max(right,diagonalDown))+arr[i][j];
    }
     int memo(vector<vector<int>>&arr,int i,int j,vector<vector<int>>&dp){
        int n = arr.size();
        int m = arr[0].size();
        if(i < 0 || j >=m || i >=n)return 0;
        
        if(dp[i][j] != -1)return dp[i][j];
        int diagonalUp = memo(arr,i-1,j+1,dp);
        int right = memo(arr,i,j+1,dp);
        int diagonalDown = memo(arr,i+1,j+1,dp);
        
        return dp[i][j] =   max(diagonalUp,max(right,diagonalDown))+arr[i][j];
    }
    int maxGold(int n, int m, vector<vector<int>> M)
    {
        // code here
        vector<vector<int>>dp(n,vector<int>(m,-1));
        int maxGold =-1;
        for(int i = 0; i <n; i++){
            int goldIcan = memo(M,i,0,dp);
            maxGold = max(maxGold,goldIcan);
        }
        return maxGold;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        vector<vector<int>> M(n, vector<int>(m, 0));
        for(int i = 0;i < n;i++){
            for(int j = 0;j < m;j++)
                cin>>M[i][j];
        }
        
        Solution ob;
        cout<<ob.maxGold(n, m, M)<<"\n";
    }
    return 0;
}
// } Driver Code Ends