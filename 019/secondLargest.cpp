vector<int> getSecondOrderElements(int n, vector<int> arr) {
    // Write your code here.
    int max1 = -9999;
    int max2 =-9999;
    int min1 = +9999;
    int min2 =+9999;

    for(int i = 0; i < n; i++){
        if(max1 < arr[i]){
                max2 = max1;
                max1 = arr[i];
        }
            else if(max2 < arr[i]){
                max2 = arr[i];
            }
        
        if(min1 >arr[i]){
                min2 = min1;
                min1 = arr[i];
        }
            else if(min2 >arr[i]){
                min2 = arr[i];
            }
        
    }
    return {max2,min2};
    
}
