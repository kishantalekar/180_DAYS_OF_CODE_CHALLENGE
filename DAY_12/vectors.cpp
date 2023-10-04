#include<bits/stdc++.h>
using namespace std;


int main(){

    vector<int> v;
    v.push_back(1);
    v.emplace_back(2);
    v.emplace_back(3);
    v.emplace_back(4);
    v.emplace_back(5);
    // cout << v[0] << v[1];
    vector <pair<int, int>> vect;

    vect.push_back({1, 3});
    // cout << vect[0].first;

    // vector<int>::iterator it = v.begin();
    // cout << *(it) <<endl;
    // it++;
    // cout << *(it);

    for(auto it :v){
        cout << it << "->";
    }

    v.erase(v.begin() + 1, v.begin() + 4);
    cout << endl;
    for(auto it :v){
        cout << it << "->";
    }

    return 0;
}