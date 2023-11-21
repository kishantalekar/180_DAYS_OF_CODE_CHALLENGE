int rev(int num) 
{ 
    int rev_num = 0; 
    while (num > 0) { 
        rev_num = rev_num * 10 + num % 10; 
        num = num / 10; 
    } 
    return rev_num; 
} 
class Solution {
public:
    int countNicePairs(vector<int>& nums) {
        unordered_map<int,int>mp;

  
        long long  cnt = 0,mod = 1e9+7;

        for(int i = 0; i < nums.size(); i++){

            int diff = nums[i] - rev(nums[i]);

            if(mp.find(diff) != mp.end()){
               cnt =(cnt +mp[diff])%mod;
            }
            mp[diff]++;     
        }
        
        return cnt;
    }
};