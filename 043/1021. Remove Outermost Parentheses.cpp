class Solution {
public:
    string removeOuterParentheses(string s) {
        vector<char>str;
        string ans;
        int open =1;
        int  closed = 0;
        for(int i = 1; i<s.length();i++){
          auto x = s[i];
          if(x == '('){
              open++;
          }else{
              closed++;
          }
          if(open == closed ){
              open = 0;
              closed = 0;
          }else if(open != 1){
              ans +=x;
          }

        }
        return ans;
    }
};