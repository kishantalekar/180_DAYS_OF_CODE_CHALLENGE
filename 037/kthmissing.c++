int missingK(vector < int > vec, int n, int k) {
    // Write your code here.
   int count =0;
    int i = 0;
    int j =1;


    for(int i =0,j =1;j<=n+k;){
        if(i <n && vec[i] == j){
            i++;
            j++;
            continue;
        }else{
            count++;
            j++;
        }
        if(count == k){
            return j-1;
        }
    }
    return -1;
}
