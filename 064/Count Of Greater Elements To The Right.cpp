vector<int> countGreater(vector<int>&arr, vector<int>&query) {
    // Write your code here.
    vector<int>ans;
    for(int i = 0; i <query.size();i++){

        int cmp = arr[query[i]];
        int count = 0;
        for(int j = query[i]+1; j < arr.size(); j++ ){
            if(cmp < arr[j]){
                count++;
            }
        }
        ans.push_back(count);
    }
    return ans;
}