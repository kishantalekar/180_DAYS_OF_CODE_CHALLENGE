int findncr(int row,int col){
    int res = 1;

    for(int i =0;i <col;i++){
        res = res*(row-i);
        res =res/(i+1);
    }
    return res;
}
vector<vector<int>> pascalTriangle(int N) {
    // Write your code here.
    vector<vector<int>>pas;
    for(int i = 0; i < N;i++){
        vector<int> d;
        for(int j = 0; j <=i; j++){
            d.push_back(findncr(i,j));
        }
        pas.push_back(d);

    }
    return pas;
}