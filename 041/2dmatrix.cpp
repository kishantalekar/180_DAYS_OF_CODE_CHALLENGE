bool searchMatrix(vector<vector<int>>& mat, int target) {
    int n = mat.size();
    int m = mat[0].size();
    

    if(target <=mat[0][m-1]){
        for(int i = 0; i<m; i++){
                if(mat[0][i] == target){
                    return true;
                }
            }
            return false;
    }
    if(target >= mat[n-1][0]){
         for(int i = 0; i<m; i++){
                if(mat[n-1][i] == target){
                    return true;
                }
            }
            return false;
    }
    int low = 1;
    int high = n-2;

    while(low <= high){

        int mid = low +(high -low)/2;

        if(target >= mat[mid][0] && target <= mat[mid][m-1] ){
            for(int i = 0; i<m; i++){
                if(mat[mid][i] == target){
                    return true;
                }
            }
            return false;
        }else if(target > mat[mid][m-1]){
            low = mid+1;
        }else{
            high = mid-1;
        }
    }
        return false;
}