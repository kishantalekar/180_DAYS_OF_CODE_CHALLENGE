int check(vector<int>&arr,int weight){
    int n = arr.size();
    int load = 0;
    int count =1;
    for(int  i = 0; i<n; i++){
     
        if(load+arr[i] <=weight){
            load+=arr[i];
        }else{
            count+=1;
            load = arr[i];
        }
       
    }
    return count;
}
class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int n = weights.size();
        int maxWeight = INT_MIN;
        int minWeight = INT_MAX;
        int totalElements = 0;
        for(int i = 0; i <n; i++){
            maxWeight = max(maxWeight,weights[i]);
            totalElements += weights[i];
            minWeight = min(minWeight,weights[i]);

        }
       if(n-1<= days)return maxWeight;
       int low = maxWeight;
       int high =totalElements;
       while(low <= high){
           int mid = low +(high -low)/2;
           int ans = check(weights,mid);
           if(ans <=days){
               high =mid-1;
           }else{
               low =mid+1;
           }
        }
        return low;
    }
};