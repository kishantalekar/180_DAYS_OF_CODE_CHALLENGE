class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int target) {
    int n = mat.size();
    int m = mat[0].size();

    int low = 0;
    int high = m-1;
    
    while(low <n && high >=0){
        if(mat[low][high] == target){
            return true;
        }else if(mat[low][high] >target){
            high--;
        }else{
            low++;
        }
    }

        return false;
    }
};