class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0 || (x!=0 && x %10 == 0) )return false;
        
        int n = x;
        long res =0;

        while(n!=0){
            int rem = n%10;
            res = res*10 + rem;
            n/=10;
        }
        return res ==x ?1:0;
    }
};