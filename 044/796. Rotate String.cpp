class Solution {
public:
    bool rotateString(string s, string goal) {
      int n = s.length();
       if (n != goal.length()) return false;
        
        string doubled = s+s;

        if(doubled.find(goal)!=string::npos){
            return true;
        }
        return false;
    }
};