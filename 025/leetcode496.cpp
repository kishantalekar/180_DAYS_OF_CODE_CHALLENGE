class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int>nge;

        for(int i = 0; i <nums1.size(); i++){
            int greaterElement = nums1[i];
            for(int j = 0; j <nums2.size(); j++){
                if(nums1[i] == nums2[j]){
                    int k = j+1;
                    int flag = true;
                    while(k <nums2.size()){
                        if(greaterElement < nums2[k]){
                            nge.push_back(nums2[k]);
                            flag = false;
                            break;
                        }
                        k++;
                    }
                    if(flag)nge.push_back(-1);
                }
            }
        }
        return nge;
        
    }
};