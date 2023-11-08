class Solution {
public:
    int romanToInt(string s) {
        map<char,int>mapp ={
            {'I',1},
            {'V',5},
            {'X',10},
            {'L',50},
            {'C',100},
            {'D',500},
            {'M',1000}
        };
        int ans = 0;
        for(int i = 0; i <s.size(); i++){

            if(mapp[s[i]] < mapp[s[i+1]]){
                ans -=mapp[s[i]];
            }else{
                ans +=mapp[s[i]];
            }
        }
        return ans ;
    }
};