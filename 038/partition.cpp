int check(vector<int>&arr,int time){
    int count = 1;
    int sum = 0;
    for(int i = 0; i <arr.size(); i++){
        if(sum + arr[i] <=time){
            sum +=arr[i];
        }else{
            sum = arr[i];
            count++;
        }
    }
    return count;
}

int findLargestMinDistance(vector<int> &boards, int k)
{
    //    Write your code here.
    int n = boards.size();
    int high =0;
    int low = -1;
    for(int i = 0; i <n ;i++){
        high+=boards[i];
        low = max(low,boards[i]);

    }

   while(low <= high){
       int mid = low +(high - low)/2;

        if(check(boards,mid) <= k){
            high = mid-1;
        }else{
            low = mid+1;
        }

   }
    return low;
    
}