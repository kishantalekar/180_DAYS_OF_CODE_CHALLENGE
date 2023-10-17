class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        set<int>rows;
        set<int>cols;

        for(int i = 0; i <matrix.size();i++){
            for(int j = 0; j<matrix[i].size();j++){
                if(matrix[i][j] == 0){
                    rows.insert(i);
                    cols.insert(j);
                }
            }
        }

        for(int i = 0; i <matrix.size();i++){
            for(int j = 0;j <matrix[i].size();j++){
                if(rows.count(i) || cols.count(j)){
                    matrix[i][j] = 0;
                }
            }
        }
    }
};