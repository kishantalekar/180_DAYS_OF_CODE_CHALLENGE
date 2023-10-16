#include <bits/stdc++.h> 

void rearrange(vector<int> &arr)
{
	// Write your code here.
	vector<int> pos;
	vector<int>neg;

	int n = arr.size();
	for(int i =  0; i <n; i++){
		if(arr[i] >0){
			pos.push_back(arr[i]);
		}else{
			neg.push_back(arr[i]);
		}
	}

	if(pos.size()>neg.size()){
		for(int i = 0; i <neg.size();i++){
			arr[i*2]=neg[i];
			arr[i*2+1]=pos[i];
		}
		int index = neg.size()*2;
		for(int i = neg.size(); i<pos.size();i++){
			arr[index]=pos[i];
			index++;
		}
	}else{
		for(int i = 0; i <pos.size();i++){
			arr[i*2]=neg[i];
			arr[i*2+1]=pos[i];
		}
		int index = pos.size()*2;
		for(int i = pos.size(); i<neg.size();i++){
			arr[index]=neg[i];
			index++;
		}
	}
}
