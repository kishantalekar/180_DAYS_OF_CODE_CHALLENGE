class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        
        int gsize = garbage.size();
        int metal = 0,glass =0, paper= 0;

        bool isPaper = false;
        bool isMetal = false;
        bool isGlass = false;
        int sum = 0;
        for(int i = 0; i < gsize; i++){
            if(i != 0){
                sum +=travel[i-1];
            }
            for(int j = 0; j <garbage[i].size();j++){
                if(garbage[i][j] == 'P'){
                    paper += sum;
                    sum = 0;
                    paper++;
                    isPaper=true;
                }
            }
        }
       
        if(!isPaper){
            paper = 0;
        }
        sum = 0;
        for(int i = 0; i < gsize; i++){
            if(i != 0){
                sum +=travel[i-1];
            }
            for(int j = 0; j <garbage[i].size();j++){
                if(garbage[i][j] == 'M'){
                    metal++;
                    metal +=sum;
                    sum = 0;
                    isMetal=true;
                }
            }
        }
        if(!isMetal){
            metal = 0;
        }
        sum =0;
        for(int i = 0; i < gsize; i++){
            if(i != 0){
                sum +=travel[i-1];
                
            }
            for(int j = 0; j <garbage[i].size();j++){
                if(garbage[i][j] == 'G'){
                    glass++;
                    glass += sum;
                    sum = 0;
                    isGlass=true;
                }
            }
        }
        if(!isGlass){
            glass = 0;
        }
        return (glass+paper+metal);
    }
};