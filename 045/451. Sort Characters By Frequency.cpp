
class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int>mapp;
        string ans;
        int n = s.length();
        for(int i = 0; i <n;i++){
            mapp[s[i]]++;
        }
        vector<pair<int,char>>a;
        for(auto x :mapp){
            a.push_back({x.second,x.first});
        }
        sort(a.begin(),a.end());
        
        for(int i = a.size()-1; i >=0;i--){
            int count = a[i].first;
            char ch = a[i].second;
            while(count>0){
                ans +=ch;
                count--;
            }
        }
        return ans;

        
    }
};