#include<bits/stdc++.h>
string postToInfix(string postfix) {
    // Write your code here.
    stack<string> st;
    for(int i = 0; i < postfix.size(); i++){
        
        if(postfix[i] >= 'A' && postfix[i] <= 'z'){
            string t = "";
            t +=postfix[i];
            st.push(t);
        }else{
            string f = st.top();
            st.pop();
            string s = st.top();
            st.pop();
            string temp = '('+s+postfix[i]+f+')';
            st.push(temp);
        }
    }
    return st.top();
}