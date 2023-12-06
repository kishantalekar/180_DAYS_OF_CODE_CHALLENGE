class Solution {
public:
    int totalMoney(int n) {
        int nn = 7;
        int res = 0;
        int ans = 0;
        int a = 1;
        if(n <7){
            nn = n;
        }

        while (n > 0) {
            res = ((nn) * ((2 * a) + (nn - 1))) / 2;
            ans += res;
            a++;
            n = n - 7;
            if(nn <7){
            nn = n;  // Update nn here
            }
        }

        return ans;
    }
};
