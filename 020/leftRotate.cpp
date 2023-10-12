vector<int> rotateArray(vector<int>arr, int k) {
    // Write your code here.
    while(k--)
     for(int i = 1,j = 0; i<arr.size(); i++,j++){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;

    }
    return arr;
}
