//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
  public:
  int digits(int n){
      int sum = 0;
      while(n){
          sum += n %10;
          n = n/10;
      }
      return sum;
  }
    int smithNum(int n) {
        // code here
        
        int k = n, sum = 0;
        
        for(int i = 2; i <=sqrt(n); i++){
            while(n%i == 0){
                sum += digits(i);
                n /= i;
            }
        }
        if(n > 1 && n != k){
            sum += digits(n);
        }
        return sum == digits(k);
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        
        cin>>n;

        Solution ob;
        cout << ob.smithNum(n) << endl;
    }
    return 0;
}
// } Driver Code Ends