class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n = nums.size();
       map<int,int>mapp;
       for(int i = 0; i<n; i++){
           if(mapp.count(nums[i])){
               mapp[nums[i]]++;
           }else{
               mapp[nums[i]]=0;
           }
       }
       map<int, int>::iterator it;
       for(it= mapp.begin(); it!=mapp.end();it++){
           if(it->second == 0){
               return it->first;
           }
       }
       return -1;
    }
};