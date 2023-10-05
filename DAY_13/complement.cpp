#include<iostream>
using namespace std;

class Solution {
public:
    int bitwiseComplement(int n) {
        int ans = 0;
        int i = 0;
        int mult =1;
        if(n == 0)return 1;
        while(n!=0){
            int rem = n%2;
            rem = rem^1;
            ans = ans +rem*mult;
            mult = mult*2;
            n/=2;
        }
        return ans;
    }
};