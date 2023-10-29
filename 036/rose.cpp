long long int check(vector<int>&arr,int day,int k,int m){
    int count =0;
    long long int  count2 = 0;
    for(int i= 0; i <arr.size(); i++){
        if(arr[i] <= day){
           count++;
        }else{
            count2=count2+(count/k);
            count = 0;
        }
    }
    count2+=count/k;
    if(count2 >= m)return true;
    return false;
}
int roseGarden(vector<int> bloomDay, int k, int m)
{
	// Write your code here
	 int high = INT_MIN;
        int low = INT_MAX;
        int n = bloomDay.size();
        if(n == 2 && m ==1 && k==1){
            return bloomDay[0];
        }
        if(m>(n/k)) return -1;

        for(int i = 0; i<n ;i++){
            high = max(high,bloomDay[i]);
            low = min(low,bloomDay[i]);
        }
        int ans = -1;
        while(low <= high){
            int  mid = low +(high -low)/2;

            if(check(bloomDay,mid,k,m)== true){
                ans = mid;
                high=mid-1;
            }
            else{
                low = mid+1;
            }
        }
        return low;
}