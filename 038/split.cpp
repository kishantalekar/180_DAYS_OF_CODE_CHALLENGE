int check(vector<int>&nums,int ele,int end ){
    int k = 1;
    int sum =0;

    for(int i = 0; i<nums.size();i++){

        // if(end-k == nums.size()-i){
        //     k++;
        // }

        if(sum+nums[i] <= ele ){
            sum+=nums[i];
        }else{
            sum = nums[i];
            k++;
        }
    }
    return k;
}
class Solution {
public:
    int splitArray(vector<int>& nums, int k) {
     int n = nums.size();

     int low =INT_MIN ,high=0;
     for(int i = 0;i <n; i++){
         high += nums[i];
         low =max(low,nums[i]);
     }
     if(k == n)return low;
     while(low <= high){
         int mid = low+(high - low)/2;
         if(check(nums,mid,k) <= k){
             high= mid-1;
         }else{
            low =mid+1;
         }

     }
     return low;
     }
};