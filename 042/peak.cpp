int maxElementInColumn(vector<vector<int>>& mat,int n,int mid){
    int maxElement = INT_MIN;
    int maxIndex = -1;

    for(int i = 0; i <n;i++){
        if(maxElement <mat[i][mid]){
            maxElement = mat[i][mid];
            maxIndex = i;
        }
    }
    return maxIndex;
}
class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();
        int low = 0;
        int high =m-1;

        while(low <= high){
            int mid = low+(high - low)/2;
            int maxEleIndex = maxElementInColumn(mat,n,mid);

            int left =mid-1 >=0 ?mat[maxEleIndex][mid-1]:-1;
            int right = mid+1<=m-1 ?mat[maxEleIndex][mid+1]:-1;
            int curr = mat[maxEleIndex][mid];

            if(curr >left && curr> right){
                return {maxEleIndex,mid};
            }else if(curr <left){
                high =mid-1;
            }else{
                low = mid+1;
            }
        }
        return {-1,-1};
        
    }
};