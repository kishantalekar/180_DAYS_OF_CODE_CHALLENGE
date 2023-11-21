#include <bits/stdc++.h> 

int atMost(vector<int>&arr,int n, int b){
	int i = 0; 
	int j = 0;

	unordered_map<int,int> mp;
	int count = 0;
	while(j < n){
		mp[arr[j]]++;
		while(mp.size() > b){
			auto it = mp.find(arr[i]);
			it->second--;
			if(it->second == 0)mp.erase(it);
			i++;
		}

		count += (j -i +1);
		j++;

	}
	return count;
}
int goodSubarrays(vector<int>& arr, int n, int b)
{
	// Write your code here.
	return atMost(arr,n,b) -atMost(arr,n,b-1);
}
