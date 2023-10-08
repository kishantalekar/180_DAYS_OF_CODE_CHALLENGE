#include<bits/stdc++.h>
using namespace std;

int main(){
    map<int, int> mpp;

    int array[] = {10,5,10,15,10,5};
    for (int i = 0; i < sizeof(array)/4;i++)
        mpp[array[i]]++;

    int maxFreq = INT_MIN;
    int minFreq = INT_MAX;
    int maxElement = -1,minElement = -1;
    for (auto it :mpp){
        if(it.second > maxFreq){
            maxElement = it.first;
            maxFreq = it.second;
        }
        if(it.second < minFreq){
            minElement = it.first;
            maxFreq = it.second;
        }
    }
    cout << maxElement << " " << minElement;
    return 0;
}