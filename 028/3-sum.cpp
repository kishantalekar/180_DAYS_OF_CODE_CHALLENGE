#include<bits/stdc++.h>
vector<vector<int>> triplet(int n, vector<int> &arr)
{
    // int n = arr.size();
   
    set<vector<int>> s;
    for(int i = 0; i <n-1; i++){
        unordered_map<int,int>mapp;
        for(int j = i+1; j <n; j++){
            int target = -(arr[i]+arr[j]);
            if(mapp.find(target)!=mapp.end()){
                vector<int> d ={arr[i],arr[j],arr[mapp[target]]};
                sort(d.begin(),d.end());
                s.insert(d);
            }else{
                mapp[arr[j]]=j;
            }
        }
    }
    return vector<vector<int>>(s.begin(),s.end());
}
