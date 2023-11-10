#include<iostream>
#include<string>
using namespace std;

string reverse_string(string str){
    string rvstr;
    for (int i = str.size() - 1; i >= 0;i--){
        rvstr += str[i];
    }
        return rvstr;
}
int main(){
    string str = "eye";
    string str2 = str;
    int start = 0, end = str.size() - 1;
    while (start < end){
        swap(str[start], str[end]);
        start++;
        end--;
    }
    cout << (str == str2) << endl;
    return 0;
}