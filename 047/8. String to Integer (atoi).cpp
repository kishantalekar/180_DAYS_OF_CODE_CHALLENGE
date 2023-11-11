class Solution {
public:
    int myAtoi(string s) {
        int size = s.size();
        double  sum = 0;
        int n = 1;
        bool minus = false;
        int neg = 0;
        int pos= 0;
        int i =0;
        while(s[i] == ' '){
           
            i++;
        }
        while(s[i] == '-'){
            i++;
            neg++;
        }
        while(s[i] == '+'){
            i++;
            pos++;
        }
        if(pos >1 || neg > 1)return 0;
        for(;i<size; i++){
            if(s[i] >='0' && s[i] <='9'){
                int digit = s[i]-'0';  
                sum = sum*10 +digit; 
            }else{
                break;
            }
        }
        if(neg >0 && pos >0){
            return 0;
        }
        if(neg >0){
            sum = -sum;
        }
       
       if(sum >INT_MAX){
           sum = INT_MAX;
       }
       if(sum < INT_MIN){
           sum = INT_MIN;
       }

        return (int) sum;
    }
};