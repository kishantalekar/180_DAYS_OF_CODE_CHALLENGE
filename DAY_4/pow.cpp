#include<iostream>
using namespace std;

int main(){
    int num = 5;
    int pow = 4;
    int result = num;
    for (int i = 1; i < pow; i += 1)
    {
        result = result * num;
    }
    cout << result;
    return 0;
}