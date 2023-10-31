#include<bits/stdc++.h>
int check(vector<int>&stalls,int distance,int k){
    int n = stalls.size();
    int count =1;
    int lastPos = stalls[0];
    for(int i = 1; i <n; i++){
        if(stalls[i] -lastPos >= distance){
            count++;
        lastPos = stalls[i];
        }
    }
    if(count >= k)return 1;
    return 0;
}
int aggressiveCows(vector<int> &stalls, int k)
{
    //    Write your code here.
    int distance =-1;
    int n = stalls.size();

    sort(stalls.begin(),stalls.end());
    int low = 1;
    int high = stalls[n-1]-stalls[0];

    while(low <= high){
        int mid = low+(high - low)/2;

        if(check(stalls,mid,k)){
            distance = mid;
            low = mid+1;
        }else{
            high = mid-1;
        }

    }
    return high;
}