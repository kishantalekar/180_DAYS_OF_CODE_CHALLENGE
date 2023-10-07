#include<iostream>
using namespace std;

class Solution
{
public:
    int trailingZeroes(int N)
    {
        
        int sum = 0;
        if(N<=5){
            return N/5;
        }
        while(N>=5){
            int q = N/5;
            sum +=q;
            N=q;
        }
        return sum;
    }
};


int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;
        Solution ob;
        int ans  = ob.trailingZeroes(N);
        cout<<ans<<endl;
    }
    return 0;
}
