int rowWithMax1s(vector<vector<int>> &matrix, int n, int m)
{
    //    Write your code here.
    int maxOnes =-1;
    int maxIndex =-1;
    for(int row = 0; row <n; row++){
        int count = -1;
        vector<int>::iterator  lb = lower_bound(matrix[row].begin(), matrix[row].end(), 1);
        int i = lb - matrix[row].begin();
        count = m-i;

        if(count >maxOnes){
            maxIndex = row;
            maxOnes = count;
        }
        
    }
    return maxIndex;
};