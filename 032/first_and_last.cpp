pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    // Write your code here
    int low =0;
    int high = n-1;
    int first = -1;
    int last = -1;

    while(low <= high){
        int mid = low +(high -low)/2;

        if(arr[mid] == k){
            first = mid;
            high = mid-1;
        }else if(arr[mid] >k){
            high = mid-1;
        }else{
            low = mid+1;

        }
    }
     low =0;
     high = n-1;
    while(low <= high){
        int mid = (low +high)/2;

        if(arr[mid] == k){
            last = mid;
            low = mid+1;
        }else if(arr[mid] >k){
            high = mid-1;
        }else{
            low = mid+1;

        }
    }
    return {first,last};

    
}
