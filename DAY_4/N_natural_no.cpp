
#include<iostream>
using namespace std;

int main(){
    int n, sum = 0;
    cout << "enter the n number :";
    cin >> n;
   
    for (int i = 1; i <= n; i += 1)
    {
        sum += (i*i);
    }
    cout << sum;
    return 0;
}