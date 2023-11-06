class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string word = strs[0];
        string ans;
        for(int i = 0; i <word.size();i++){
            char ch = word[i];
            int flag = true;
            for(int j = 0; j<strs.size();j++){
                if(strs[j][i] != ch){
                    flag = false;
                    return ans;
                }
            }
            if(flag){
                ans  = ans+ch;
            }else{
                break;
            }
        }
        return ans;
    }
};