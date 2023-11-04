#include<bits/stdc++.h>
int upperBound(vector<int> &arr, int x, int n) {
    int low = 0, high = n - 1;
    int ans = n;

    while (low <= high) {
        int mid = (low + high) / 2;
        // maybe an answer
        if (arr[mid] > x) {
            ans = mid;
            //look for smaller index on the left
            high = mid - 1;
        }
        else {
            low = mid + 1; // look on the right
        }
    }
    return ans;
}

int blackBox(vector<vector<int>> &matrix,int x){
    int m = matrix.size();
    int n = matrix[0].size();

    int count = 0;
    for(int i = 0; i <m;i++){
     count+=upperBound(matrix[i],x,n);
    }
    return count;
}
int median(vector<vector<int>> &matrix, int m, int n) {
    // Write your code here.
    
    int low = INT_MAX;
    int high = INT_MIN;

    for(int i = 0; i <m;i++){
        low = min(low,matrix[i][0]);
        high = max(high,matrix[i][n-1]);
    }
    int target = (m*n)/2;
    while(low <= high){
        int mid = (low+high)/2;

      

        int smallestEquals =blackBox(matrix,mid);
        if(smallestEquals <=target){
            low = mid+1;
        }else{
            high = mid-1;
        }
    }
    return low;
}