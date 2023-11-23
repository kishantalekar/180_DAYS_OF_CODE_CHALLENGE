class Solution {
public:
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        vector<bool> ans;
       
        for(int i = 0 ,j = 0; i < l.size() && j < r.size();i++,j++){
            vector<int> arr(nums.begin()+l[i],nums.begin()+r[i]+1);
            sort(arr.begin(),arr.end());            
            int k = 1;
            bool flag = true;
            if(arr.size() < 2){
                ans.push_back(true);
                continue;
            }
            int d = arr[1]-arr[0];
            while(k < arr.size()){
                if(arr[k] - arr[k-1] != d ){
                    flag = false;
                    break;
                }
                k++;
            }
             ans.push_back(flag);
        }
        return ans;
    }
};