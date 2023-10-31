int allocatebook(vector<int>&arr,int pages,int m){
    int n = arr.size();
    int sum =0;
    int count =1;

    for(int i =0; i <n; i++){
        if(sum +arr[i] <=pages){
            sum+=arr[i];
        }else{
            count++;
            sum = arr[i];
        }
        
    }
    return count;
}
int findPages(vector<int>& arr, int n, int m) {
    // Write your code here.

    int sum = 0;
    int max_element =INT_MIN;
    if(m >n)return -1;

    for(int i = 0; i < n; i++){
        sum+=arr[i];
        max_element = max(max_element,arr[i]);
    }
    int low = max_element;
    int high =sum;
    while(low <= high){
        int mid = low+(high - low)/2;
        int res = allocatebook(arr,mid,m);
         if(res <= m){
            high = mid-1;
        }else{
            low = mid+1;
            
        }
    }
        
    return low;
}