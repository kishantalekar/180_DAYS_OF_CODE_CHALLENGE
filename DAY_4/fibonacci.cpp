
#include<iostream>
using namespace std;

int main(){
    int n,a,b;
    cout << "enter the n number :";
    cin >> n;
    a = 0;
    b = 1;
    for (int i = 0; i < n; i += 1)
    {
        cout << a <<" ";
        int c = b;
        b = a + b;
        a = c;
    }
    // cout << sum;
    return 0;
}