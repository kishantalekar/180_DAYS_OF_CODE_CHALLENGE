#include<vector>
#include<bits/stdc++.h>
int getLongestZeroSumSubarrayLength(vector<int> &arr){
	// Write your code here.
	unordered_map<int,int>mapp;
	int sum = 0;
	int maxi = INT_MIN;

	for(int i = 0; i <arr.size(); i++){
		sum+=arr[i];

		if(sum  == 0){
			maxi = i+1;
		}else if(mapp.find(sum)!=mapp.end()){
			maxi = max(maxi,i-mapp[sum]);

		}else{
			mapp[sum]=i;
		}
	}
	return maxi;

	
}