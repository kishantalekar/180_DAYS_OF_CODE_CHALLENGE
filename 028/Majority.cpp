#include<bits/stdc++.h>
vector<int> majorityElement(vector<int> v) {
	// Write your code here
	int n = v.size();
	map<long long,int> mapp;
	vector<int>res;
	int compare = (n/3)+1;
	for(long long  i = 0; i <n; i++){
		mapp[v[i]]++;
		if(mapp[v[i]] == compare){
			res.push_back(v[i]);
		}
		if(res.size()==2)break;
		
	}
	sort(res.begin(),res.end());
	
	return res;
}