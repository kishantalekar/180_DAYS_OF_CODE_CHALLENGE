class Solution {
public:
    string removeKdigits(string num, int k) {
        int n = num.size();

        if(n <= k)return "0";
        if(k == 0)return num;

        stack<char>st;
        for(int i = 0; i < n; i++){
            char ch = num[i];
            while(!st.empty() && st.top() > ch && k > 0){
                st.pop();
                k--;
            }
            st.push(ch);

            if(st.size() == 1 && num[i] =='0'){
                st.pop();
            }
        }
        while(!st.empty() && k!=0){
            st.pop();
            k--;
        }
        string ans = "";
       
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
     reverse(ans.begin(),ans.end());
        
        if(ans.length() == 0)return "0";
        return ans;
    }
};