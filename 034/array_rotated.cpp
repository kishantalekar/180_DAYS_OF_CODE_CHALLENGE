#include<bits/stdc++.h>
int findKRotation(vector<int> &arr){
    // Write your code here. 
    int low = 0;
	int high = arr.size()-1;
	int ans = INT_MAX;
	int index = 0;
	int n = arr.size();
	while(low <= high){
		if(arr[low] <= arr[high]){
			ans = min(ans,arr[low]);
			if(arr[low] <=ans){
				index = low;
			}
			break;
		}
		int mid = (low+high)/2;

		if(arr[low] <= arr[mid]){
			ans = min(ans,arr[low]);
			if(arr[low] <ans){
				index = low;
			}
			low = mid+1;
		}else{
			ans = min(ans,arr[mid]);
			if(arr[mid] <=ans){
				index = mid;
			}
			high = mid-1;
		}
	}
	if(index == 0 )return 0;
	return (n-(n-index));
}