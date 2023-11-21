bool check(char a,char b){

    if(a == '(' && b == ')'){
        return true;
    }else if(a == '[' && b == ']'){
        return true;
    }else if(a=='{' && b == '}'){
        return true;
    }
    return false;
}
class Solution {
public:
    bool isValid(string s) {
        
        stack<char> st;

        if(s.size() <= 1)return false;

        for(int i = 0; i < s.size(); i++)
        {
        if(s[i] == '(' || s[i] == '[' || s[i] == '{'){
            st.push(s[i]);
        }else if(s[i] == ')' || s[i] == ']' || s[i] == '}'){
            if(st.empty())return false;

            if(!check(st.top(),s[i])){
                return false;
            }
            st.pop();
        } 
        }

        if(!st.empty()){
            return false;
        }
      

        return true;
        }
};