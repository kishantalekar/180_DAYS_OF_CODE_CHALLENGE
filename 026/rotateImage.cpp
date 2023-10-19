class Solution {
public:
    void rotate(vector<vector<int>>& mat) {
	int m = mat.size();
	
	for(int i = 0; i <m-1;i++){
		for(int j = i+1; j <m;j++){
			swap(mat[i][j],mat[j][i]);
		}
	}

	for(int i =0; i<m;i++){
		reverse(mat[i].begin(),mat[i].end());
	}
    }
};