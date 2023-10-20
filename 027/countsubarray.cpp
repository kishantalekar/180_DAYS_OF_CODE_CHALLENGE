int findAllSubarraysWithGivenSum(vector < int > & arr, int k) {
    // Write Your Code Here
    int n = arr.size();
    int count = 0;
    int i = 0;
    int j =1;
    int sum = arr[0];
    while(i < n){
        if(sum == k){
            i++;
            count++;
            sum=0;
            j =i;
        }else if(sum < k && j <n){
            sum +=arr[j];
            j++;
        }else{
            i++;
            j = i;
            sum = 0;
        }

    }
    
    return count;
}