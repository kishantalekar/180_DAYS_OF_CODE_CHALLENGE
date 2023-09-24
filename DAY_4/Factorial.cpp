
#include<iostream>
using namespace std;

int main(){
    int n,fact=1;
    cout << "enter the n number :";
    cin >> n;
   
    for (int i = 1; i <= n; i += 1)
    {
        fact *= i;
    }
    cout << fact;
    return 0;
}