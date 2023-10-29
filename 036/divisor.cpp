long long int check(vector<int>& arr, int d) {
    long long int res = 0;
    for (int i = 0; i < arr.size(); i++) {
        res += ceil(static_cast<double>(arr[i]) / static_cast<double>(d));
    }
    return res;
}
int smallestDivisor(vector<int>& nums, int limit)
{
	// Write your code here.
	int n = nums.size();
     int high =INT_MIN;
     int low = 1;
     for(int i = 0; i <n; i++){
         high = max(high,nums[i]);
     }
     int ans=-1;
     while(low <= high){
         int mid = low +(high - low)/2;

         if(check(nums,mid) <=limit){
             ans = mid;
             high  = mid-1;
         }else{
             low =mid+1;
         }
     }
     return ans;
}