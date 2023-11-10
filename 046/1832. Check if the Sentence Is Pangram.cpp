class Solution {
public:
    bool checkIfPangram(string sentence) {
        unordered_map<char,int>mapp;

        for(int i = 0;  i < sentence.size();i++){
            mapp[sentence[i]]++;
        }
        
        if(mapp.size() == 26){
            return true;
        }
        return false;
    }
};