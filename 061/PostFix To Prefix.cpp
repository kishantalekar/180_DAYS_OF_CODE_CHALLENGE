#include<bits/stdc++.h>
string postfixToPrefix(string &s){
    // Write your code here.
    stack<string>st;
    for(int i = 0; i < s.size(); i++){

        if(s[i] >= 'a' && s[i] <= 'z'){
            string t = "";
            t +=s[i];
            st.push(t);
        }else{
            string first = st.top();
            st.pop();
            string second = st.top();
            st.pop();

            string temp = s[i]+second+first;
            st.push(temp);
        }
    }
    // while(!st.empty()){

    // }
    return st.top();
}