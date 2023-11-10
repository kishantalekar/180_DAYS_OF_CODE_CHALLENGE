#include<string>
#include<iostream>
#include<vector>
using namespace std;
bool check(char c)
{
    if(c =='a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') return true;
    if(c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') return true;

    return false;
}
class Solution {
public:
    string sortVowels(string s) {
        int n = s.size();
        vector<char> arr;
        for(int i = 0; i <n; i++){
            if(check(s[i])){
                arr.push_back(s[i]);
            }
        }
        sort(arr.begin(),arr.end());
        for(auto i :arr){
            cout << i;
        }
        cout << endl;
        int j = 0;

        for(int i = 0; i < n;i++){
            if(check(s[i])){
               s[i] =arr[j];
               j++; 
            }
        }
        cout << s;
        return s;
    }
};

int main(){
    Solution s;
    s.sortVowels("lEetcOde");
    return 0;
}