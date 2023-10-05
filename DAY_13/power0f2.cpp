#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPowerOfTwo(int n) {
        int i = 0;
        long res = 0;
        while(res <=n){
            res = pow(2,i);
            if(res == n)return true;

            i++;
        }
        return false;
    }
};