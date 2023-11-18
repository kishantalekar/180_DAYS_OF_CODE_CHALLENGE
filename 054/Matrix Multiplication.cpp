#include <bits/stdc++.h> 
vector<vector<int>> multiplyMatrices(vector<vector<int>> &mat1, vector<vector<int>> &mat2)
{
    // Write your code here.
    int mat1rows = mat1.size();
    int mat1cols = mat1[0].size();

    int mat2rows = mat2.size();
    int mat2cols = mat2[0].size();

    vector<vector<int>>res(mat1rows,vector<int>(mat2cols,0));

    for(int i = 0; i <mat1rows; i++){
        
        for(int j = 0; j <mat2cols; j++){
            
           for(int k = 0; k <mat1cols; k++){
               res[i][j]+=mat1[i][k]*mat2[k][j];
           }
        }
        
    }
    return res;
}