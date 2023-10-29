long long int caltime(vector<int> &piles,int k){
    long long int h = 0;
       
        for(auto i : piles)
        {
            if(i % k != 0)
            {
                h++;
            }
            h += (i / k);
        }
        return h;
}

class Solution {
public:
    int minEatingSpeed(vector<int>& v, int h) {
    int n = v.size();
    int maxele = INT_MIN;
    
    for(int i =0; i <n; i++){
        maxele = max(v[i],maxele);
    }
    int low = 1;
    int high =maxele;

    while(low <= high){
        int mid = low +(high -low)/2;

        long long int requiredTime = caltime(v,mid);
        if(requiredTime <= h){
            high =mid-1;
        }else{
            low = mid+1;
        }
    }
    return low;
    }
};