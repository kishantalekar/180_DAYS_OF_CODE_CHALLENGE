class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
        vector<int>res;
        vector<int>prefix;
        int s = 0;
        int n = nums.size();
        for(int i = 0; i <nums.size();i++){
            s  = s+nums[i];
            prefix.push_back(s);

        }

       
        for(int i = 0; i < nums.size();i++){
            int rres =((nums[i]*i)-(prefix[i] - nums[i] )) +(prefix[n-1]-prefix[i]) - nums[i]*(n-i-1);
            res.push_back(rres);

        }
        return res;
    }
};