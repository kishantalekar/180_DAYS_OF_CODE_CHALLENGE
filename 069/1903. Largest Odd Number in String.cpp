class Solution {
public:
    string largestOddNumber(string num) {
        int n = num.size();
        int oddStart = -1;
        int oddEnd = -1;
        for(int i = n-1; i >= 0; i--){

            int ch = num[i]-'0';

            if(ch%2 != 0){
                oddEnd = i;
                break;
            }
        }

        return num.substr(0,oddEnd+1);
       
    }
};