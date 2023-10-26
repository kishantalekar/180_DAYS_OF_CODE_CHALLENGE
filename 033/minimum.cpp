int findMin(vector<int>& arr)
{
	// Write your code here.
	int low = 0;
	int high = arr.size()-1;
	int ans = INT_MAX;

	while(low <= high){
		if(arr[low] <= arr[high]){
			ans = min(arr[low],ans);
			break;
		}

		int mid = (low+high)/2;
		ans = min(ans,arr[mid]);

		if(arr[mid]>=arr[low]){
			low = mid+1;
		}else{
			high = mid-1;
		}
	}
	return ans;
}