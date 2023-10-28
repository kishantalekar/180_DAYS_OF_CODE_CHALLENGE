long long  floorSqrt(int n)
{
  

    int low =1;
    int high = n;
    while(low <= high){
        long long  mid = low +(high -low)/2;
        long long  sq = mid*mid;
         if(sq <=n){
            // ans = mid;
            low = mid+1;
        }else{
            high = mid-1;
        }
    }

    return high;
}
