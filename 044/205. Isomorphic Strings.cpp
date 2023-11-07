
class Solution {
public:
 bool isIsomorphic(std::string s, std::string t) {
    
    if (s.length() != t.length()) return false;
    std::unordered_map<char, char> mapp1;
    std::unordered_map<char, char> mapp2;

    for (int i = 0; i < s.length(); i++) {
        if (mapp1.find(s[i]) != mapp1.end() && mapp1[s[i]] != t[i]) {
            return false;
        }
        if (mapp2.find(t[i]) != mapp2.end() && mapp2[t[i]] != s[i]) {
            return false;
        }
        mapp1[s[i]] = t[i];
        mapp2[t[i]] = s[i];
    }
    return true;
}
};