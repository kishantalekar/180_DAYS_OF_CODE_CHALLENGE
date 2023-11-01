int kthElement(vector<int> &arr1, vector<int>& arr2, int n, int m, int k){
    // Write your code here
    int count = 1;

    int i = 0;
    int j =0;

    while(i <n && j <m){
        if(arr1[i] < arr2[j]){
            if(count == k)return arr1[i];
            i++;
        }else{
            if(count == k)return arr2[j];
            j++;
        }
        count++;
    }
    return -1;
}