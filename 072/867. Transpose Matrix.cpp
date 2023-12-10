class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int col = matrix[0].size();

        vector<vector<int>>temp;

        for(int i = 0; i < col; i++){
            vector<int>t;
            for(int j = 0; j < row; j++){
                t.push_back(matrix[j][i]);
            }
            temp.push_back(t);
        }
        return temp;
    }
};