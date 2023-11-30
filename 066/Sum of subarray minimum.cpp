class Solution {
public:
    int sumSubarrayMins(vector<int>& arr) {
        int n = arr.size();
        long long sum =0;
        int mod = 1e9+7;
        
        vector<int>nsl(n,-1),ngl(n,n);
        stack<int>st;
        for(int i = 0; i < n; i++){

            while(!st.empty() && arr[st.top()] >=arr[i]){
                st.pop();
            }
            if(!st.empty()){
                nsl[i] = st.top();
            }
            st.push(i);
        }
        while(!st.empty())st.pop();
        for(int i = n-1; i >= 0; i--){

            while(!st.empty() && arr[st.top()] > arr[i]){
                st.pop();
            }
            if(!st.empty()){
                ngl[i] = st.top();
            }
            st.push(i);
        }

        for(int i = 0; i <n; i++){
            long long prod =((nsl[i] -i) *(i - ngl[i]))%mod;
            prod = (prod*arr[i])%mod;
            sum =(sum + prod)%mod;
        }
        return sum%mod;
    }
};