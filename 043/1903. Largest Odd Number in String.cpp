class Solution {
public:
    string largestOddNumber(string num) {
        string ans;
        int last_index =-1;
        for(int i = num.size()-1; i >=0;i--){
            int n = num[i];
            int isOdd = n -49+1;
            if(isOdd%2!=0){
                last_index = i;
                break;
            }
        }
        ans =num.substr(0,last_index+1);
        return ans;
    }
};