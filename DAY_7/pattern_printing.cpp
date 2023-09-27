#include<iostream>
using namespace std;

int main(){
    for (int i = 1; i <= 5; i++){
        for (int j = 1; j <= 5 - i ;j++){
            cout << " ";
        }
        for (int k = 1; k <= i; k++){
            cout << "*";
        }
        cout << endl;
    }
// output :
//     *
//    **
//   ***
//  ****
// *****

 for (int i = 1; i <= 5; i++){
        for (int j = 1; j <= 5 - i ;j++){
            cout << " ";
        }
        for (int k = 1; k <= i; k++){
            cout << i;
        }
        cout << endl;
    }

// output:
//     1
//    22
//   333
//  4444
// 55555


 for (int i = 1; i <= 5; i++){
        for (int j = 1; j <= 5 - i ;j++){
            cout << " ";
        }
        for (int k = 1; k <= i; k++){
            cout << k;
        }
        cout << endl;
    }
//     output:
//     1
//    12
//   123
//  1234
// 12345
 for (int i = 1; i <= 5; i++){
        for (int j = 1; j <= 5 - i ;j++){
            cout << " ";
        }

        for (int k = 1; k <= i; k++){
            char name = 'A' + k-1;
            cout << name;
        }
        cout << endl;
    }
// output:
//     A
//    AB
//   ABC
//  ABCD
// ABCDE

     for (int i = 1; i <= 5; i++){
        for (int j = 1; j <= 5 - i ;j++){
            cout << " ";
        }
        for (int k = i; k >=1; k--){
            cout << k;
        }
        cout << endl;
    }
        return 0;
}