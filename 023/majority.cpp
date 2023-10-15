class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> mapp;

        int n = nums.size();

        for(int i = 0; i <n; i++){
            if(mapp.count(nums[i])){
                mapp[nums[i]]++;
            }else{
                mapp[nums[i]]=1;
            }
        }

        for(auto it:mapp){
            if(it.second >n/2){
                return it.first;
            }
        }
        return -1;
    }
};