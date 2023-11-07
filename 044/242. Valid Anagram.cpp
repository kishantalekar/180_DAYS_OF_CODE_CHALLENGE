class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int>mapp1;
        unordered_map<char,int>mapp2;
        if(s.size() != t.size())return false;
        for(int i = 0; i <s.size(); i++){
            mapp1[s[i]]++;
            mapp2[t[i]]++;
        }
        for(int i =0; i <s.size();i++){
            if(mapp1[s[i]] !=mapp2[s[i]]){
                return false;
            }
        }
        return true;
    }
};