#include<bits/stdc++.h>
using namespace std;

int main(){
    unordered_map<char, int> mpp;
    string str = "aaabbbcccc";
    // for (int i = 0; i < str.length();i++){
    //     if(mpp.count(str[i])){
    //         mpp[str[i]] += 1;
    //     }else{
    //         mpp[str[i]] = 1;
    //     }
    // }
    // for(auto i : mpp){
    //     cout << i.first << ' ' << i.second << endl;
    // }
    int arr[26] = {0};

    for (int i = 0; i < str.length();i++){
        int j = str[i] - 'a';
        arr[j] = arr[j] + 1;
    }
    for (int i = 0; i < str.length();i++){
        int j = str[i] - 'a';
        cout <<str[i]<<" "<< arr[j] << endl;
    }
    int c = 'a';
    cout << c;
    c = 'b';
    cout << c;
    return 0;
}