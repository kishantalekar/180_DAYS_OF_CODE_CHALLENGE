#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    unordered_map<int, int> mpp;
    int arr[] = {1, 2, 1, 3, 2,4,1,2,1};
    int count = 0;
    for (int i = 0; i < sizeof(arr)/sizeof(int); i++){
        if(mpp.count(arr[i])){
            mpp[arr[i]] = mpp[arr[i]] + 1;
        }else{
            mpp[arr[i]] = 0;
        }
    }
    for (auto i :mpp)
    {
        cout << i.first <<" " <<i.second<< endl;
    }
        cout << count;
    return 0;
}