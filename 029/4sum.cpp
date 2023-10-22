class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n = nums.size();
       vector<vector<int>>ans;
        sort(nums.begin(),nums.end());
        if(n <= 3){
            return{};
        }
        for(int i = 0; i < n;i++){
            if(i > 0 && nums[i] == nums[i-1])continue;
            for(int j  = i+1;j <n; j++){
                if(j > i+1 && nums[j] == nums[j-1])continue;
                    int k = j+1;
                    int l = n-1;
                    while(k < l){
                        long long  sum = nums[i]+nums[j];
                        sum+=nums[k];
                        sum+=nums[l];
                        if(sum == target){
                            vector<int>temp = {nums[i],nums[j],nums[k],nums[l]};
                            ans.push_back(temp);
                            k++;
                            while(k<l &&nums[k] == nums[k-1])k++;

                            l--;
                            while(l >k && nums[l] == nums[l+1])l--;
                        }else if(sum < target){
                            k++;
                            while(k<l && nums[k] == nums[k-1])k++;
                        }else if(sum > target){
                            l--;
                            while(l >k && nums[l] == nums[l+1])l--;
                        }

                    }
            } 
        }
        return ans;
    }
};