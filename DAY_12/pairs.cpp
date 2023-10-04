#include<bits/stdc++.h>
using namespace std;

void explainPair();
int main(){
    explainPair();
    return 0;
}

void explainPair(){
    pair<int, int> p= {1, 3};
    cout << p.first << "\t" << p.second << endl;

    pair<int, pair<int, int>> p1 = {1, {2, 3}};
    cout << p1.first << " " << p1.second.first  << p1.second.second << endl;

    pair<int, int> arr[] = {{1, 2}, {3, 4}, {5, 6}};
    for(pair<int,int> i :arr){
        cout << i.first <<" " << i.second << endl;
    }
}