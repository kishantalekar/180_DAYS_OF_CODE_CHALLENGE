int longestSuccessiveElements(vector<int>&nums) {
    // Write your code here.
    int i = 0;
        int j = 1;
        int n = nums.size();
        sort(nums.begin(),nums.end());
        int count= 1;
        if(n <=0){
            return 0;
        }
        if(n ==1 ){
            return 1;

        }
        int maxSub = 1;
        while(j <n){
            if(nums[j] -nums[i] == 1 ){
                count++;
                maxSub = max(maxSub,count);
            }else if(nums[j] == nums[i]){

                
                
                }else {
                count =1;
            }
            i++;
            j++;
        }
        return maxSub;
}