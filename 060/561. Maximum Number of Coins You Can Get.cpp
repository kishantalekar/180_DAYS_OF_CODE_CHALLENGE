class Solution {
public:
    int maxCoins(vector<int>& piles) {
        

        int bob = 0; 

        int you = piles.size()-2;

        sort(piles.begin(),piles.end());

        int ans = 0;
        while(bob < you){
            ans +=piles[you];
            you-=2;
            bob++;

        }
        return ans;
    }
};