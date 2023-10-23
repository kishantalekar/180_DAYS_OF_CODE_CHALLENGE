#include<bits/stdc++.h>

int subarrayWithMaxProduct(vector<int> &nums){
	// Write your code here.
	 	int prefix = 1;
       int suffix  =1 ;
       int n = nums.size();
      
	   int ans=INT_MIN;

       for(int i = 0; i<nums.size(); i++){
           if(prefix == 0){
               prefix=1;
           }
           if(suffix == 0){
               suffix = 1;
           }
           prefix *=nums[i];
           suffix *=nums[n-1-i];
           
           ans = max(ans,max(prefix,suffix));
       }
       return ans;
}