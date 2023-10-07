#include<iostream>
using namespace std;

bool isArmstrong(int n){
    int sum = 0;
    int n1 = n;
    while(n!=0){
        int rem = n % 10;
        sum += rem * rem * rem;
        n /= 10;
    }

    return sum == n1;
}
int main(){
    int n = 370;
    if(isArmstrong(n)){
        cout << "armstrong number ";
    }
    else{
        cout << "Not a armstrong number ";
    }
    return 0;
}