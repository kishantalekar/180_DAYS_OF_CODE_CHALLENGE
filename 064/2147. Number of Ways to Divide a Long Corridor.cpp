class Solution {
public:
    int numberOfWays(string corridor) {
        vector<int>seats;
        int mod = 1e9+7;
        for(int i = 0; i <corridor.size(); i++){
            if(corridor[i] == 'S'){
                seats.push_back(i);
            } 
        }
    
        if(seats.size() % 2 != 0 || seats.size() ==0  )return 0;
        int i = 0;
        int j = 2;
        long long res = 1;
        while(j < seats.size()){

            res = (res * (seats[j] - seats[i+1]))%mod;
            i+=2;
            j+=2;

        }

        return (int)res;
    }
};