#include<string.h>
string preToPost(string s) {
    // Write Your Code Here
    stack<string>st;
    reverse(s.begin(),s.end());

    for(int i = 0; i < s.size(); i++){

        if(s[i] >= 'A' && s[i] <= 'Z'){
            string t ="";
            t+= s[i];
            st.push(t);
        }else{
            string firstOperand = st.top();
            st.pop();
            string secondOperand =st.top();
            st.pop();
            string temp = firstOperand+secondOperand+s[i];
            st.push(temp);
        }

    }
    string temp = "";
    while(!st.empty()){
        temp = st.top()+temp;
        st.pop();
    }
    return temp;
}