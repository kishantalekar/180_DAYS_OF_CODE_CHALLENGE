#include<bits/stdc++.h>
double minimiseMaxDistance(vector<int> &arr, int k){
	// Write your code here.
	int n = arr.size();

	priority_queue<pair<double long,int>> pq;

	for (int i = 0; i < n-1; i++) {
		double long diff = arr[i+1]-arr[i];
        pq.push(make_pair(diff,i));
    }


	vector<int>placed(n-1,0);

	for(int i = 0; i <k;i++){
		int index = pq.top().second;

		placed[index]++;

		pq.pop();
		int diff = arr[index+1]-arr[index];
		double long  sectionLength = diff/((long double)placed[index]+1);
		pq.push(make_pair(sectionLength,index));

	}
	

	
	return pq.top().first;
}
