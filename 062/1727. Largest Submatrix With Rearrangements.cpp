class Solution {
public:
    int largestSubmatrix(vector<vector<int>>& matrix) {
        int n = matrix.size(),m = matrix[0].size();
        
        for(int i = 1; i < n; i++){

            for(int j = 0; j < m; j++){

                if(matrix[i][j]){
                    matrix[i][j] +=matrix[i-1][j];
                }
            }
        }
        int area = 0;
        for(int i = 0; i < n; i++)sort(matrix[i].begin(),matrix[i].end(),greater<int>());

        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                    area = max(matrix[i][j] *(j+1),area);
            }
        }
        return area;
    }
};