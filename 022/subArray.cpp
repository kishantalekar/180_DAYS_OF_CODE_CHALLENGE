#include <map>


int longestSubarrayWithSumK(vector<int> a, long long k) {
    // Write your code here
    int n = a.size();
    map<long long,int>mpp;
    int maxLength = 0;
     long long sum =0;
    for(int i = 0; i <n; i++){
         sum += a[i];
        if(sum == k){
            maxLength = max(maxLength,i+1);
        }
        long long rem = sum -k;
        if(mpp.find(rem)!=mpp.end()){
            int len = i - mpp[rem];
            maxLength = max(maxLength,len);
        }
        if(mpp.find(sum) == mpp.end()){   
        mpp[sum]=i;
        }
    }
    
    return maxLength;
}