class Solution {
public:
    int maxProfit(vector<int>& prices) { 
    int maxProfit = INT_MIN;

    int n = prices.size();
    int i = 0;
    int j =1;
    int ele = prices[0];
    if(n == 1){
        return 0;
    }
    while(j < n){
        
         if(ele > prices[j]){
            ele = prices[j];
            i =j;
        }
        int sum = prices[j]-prices[i];
        maxProfit =max(maxProfit,sum);
        
        j++;
    }
    return maxProfit;
    }
};