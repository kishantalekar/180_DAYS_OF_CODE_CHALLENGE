#include<bits/stdc++.h>
string read(int n, vector<int> book, int target)
{
    // Write your code here.
   unordered_map<int,int> mpp;
   for(int i = 0; i < n; i++){
       int sum = target -book[i];
       if(mpp.count(sum)){
           return "YES";
       }else{
           mpp[book[i]]=i;
       }
   }
    return "NO";
}
