
class Solution {
  public:
    int countX(int L, int R, int X) {
        // code here
        int cnt = 0;
       for(int i = L+1; i < R; i++){
           
           int n = i;
           
           while(n!= 0){
               
               if(n % 10 == X)cnt++;
               
               n = n/10;
           }
       }
       return cnt;
    }
};