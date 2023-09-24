#include <iostream>
using namespace std;

int main(){
    // for (int i= 0; i < 4; i++){
    //     cout << "Coder Army" <<endl;
    // }

    // Print “India will win the World Cup 2023”, 20 times.

    //  for (int i= 0; i < 20; i++){
    //     cout << "India will win the World Cup 2023" <<endl;
    // }

    // Print all Odd numbers from 1 to n, take n as an input from the user.
    // int n;
    //         cout << "Enter the nth number :";

    // cin >> n;
    // for (int i = 1; i < n;i++){
    //     if(i%2!=0){
    //         cout << i<<endl;
    //     }
    // }

    // Print all numbers from 1 to n, which is divisible by 4. Take n as an input from the user.
 int n;
            cout << "Enter the nth number :";

    cin >> n;
    for (int i = 1; i < n;i++){
        if(i%4==0){
            cout << i<<endl;
        }
    }
    
        return 0;
}