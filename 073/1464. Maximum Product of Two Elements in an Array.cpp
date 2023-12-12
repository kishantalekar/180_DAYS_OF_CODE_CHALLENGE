class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n  = nums.size();
        int n1 = -1;
        int n2 = -1;
        for(int i = 0; i <n; i++){

            if(nums[i] > n1){
                n2 = n1;
                n1 = nums[i];
            }else if(nums[i] >n2){
                n2 = nums[i];
            }
        }

        int sumProduct = (n1 -1)*(n2 -1);
        return sumProduct;
    }
};