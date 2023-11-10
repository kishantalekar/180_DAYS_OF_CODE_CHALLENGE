class Solution {
public:
    string sortSentence(string s) {
        map<int,string>mp;

        int n = s.size();
        for(int i = 0; i < n; i++){
            if(s[i] !=' '){
                int wordStarted = i;
                while(s[i]!='\0'){
                    if(s[i] >= '1' && s[i] <='9'){
                        int number = s[i] -'0';
                        string word = s.substr(wordStarted,i-wordStarted);
                        mp[number]=word;
                        i++;
                        break; 
                    }
                    i++;
                }
            }
        }
        string ans;
        for(auto i : mp){
            ans += i.second+" ";
        }
        ans.pop_back();
        return ans;
    }
};