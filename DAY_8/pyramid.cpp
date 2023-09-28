#include<iostream>
using namespace std;

int main(){
    int n=4;
    // cin >> n;
    // for (int i = 1; i <= n;i++){
    //     for (int j = 1; j <= n - i;j++){
    //         cout << " ";
    //     }
    //     for (int k = 1; k <= i*2-1;k++){
    //         cout << "*";
    //     }
    //     cout << endl;
    // }
// output:
// 5
//     *
//    ***
//   *****
//  *******
// *********
//  for (int i = 1; i <= n;i++){
//         for (int j = 1; j <= n - i;j++){
//             cout << " ";
//         }
//         for (int k = 1; k <= i;k++){
//             cout << k;
//         }
//         for (int l = i; l > 1;l--){
//             cout << l-1;
//         }
//             cout << endl;
//     }
//     1
//    121
//   12321
//  1234321
// 123454321
    
//     for (int i = n; i >= 1; i--)
//     {
      
//         for (int j = 1; j < n-i+1;j++){
//             cout << " ";
//         }
//         for (int k = 1; k <=i*2-1;k++){
//             cout << "*";
//         }
      
        
//             cout << endl;
//     }
// *********
//  *******
//   *****
//    ***
//     *

    // for (int i = 1; i <= n ;i++){
    //     for (int j = 1; j <= n-i+1;j++){
    //         cout << "*";
    //     }
    //     for (int k = 1; k <i*2-1;k++){
    //         cout << " ";
    //     }
    //     for (int j = 1; j <= n-i+1;j++){
    //         cout << "*";
    //     }
    //     cout << endl;
    // }
    // for (int i = 1; i <= n;i++){
    //     for (int j = 1; j <= i;j++){
    //         cout << "*";
    //     }
    //     for (int k = 1; k <=n*2-2*i;k++){
    //         cout << " ";
    //     }
    //      for (int j = 1; j <= i;j++){
    //         cout << "*";
    //     }
    //     cout << endl;
    // }
// ****************
// *******  *******
// ******    ******
// *****      *****
// ****        ****
// ***          ***
// **            **
// *              *
// *              *
// **            **
// ***          ***
// ****        ****
// *****      *****
// ******    ******
// *******  *******
// ****************
//     for (int i = 1; i <= n;i++){
//         for (int j = 1; j <= i;j++){
//             cout << "*";
//         }
//         for (int k = 1; k <=n*2-2*i;k++){
//             cout << " ";
//         }
//         for (int j = 1; j <= i;j++){
//             cout << "*";
//         }
//         cout << endl;
//     }
//     for (int i = 1; i <= n;i++){
//         for (int k = 1; k <= n - i;k++){
//             cout << "*";
//         }
//         for (int j = 1; j <= 2 * i;j++)
//             cout << " ";
        
//         for (int k = 1; k <= n - i;k++){
//             cout << "*";
//         }

//         cout << endl;
//     }
// output:
// *      *
// **    **
// ***  ***
// ********
// ***  ***
// **    **
// *      *

    for (int i = 1; i <= n;i++){
        for (int j = 1; j <= n - i;j++){
            cout << " ";
        }
        for (int k = 1; k <= i;k++){
            cout << "* ";
        }
        cout << endl;
    }
    for (int i = n; i >= 1;i--){
        for (int k = 1; k <= n - i;k++)
            cout << " ";
            for (int j = 1; j <= i; j++)
            {
                cout << "* ";
            }
            cout << endl;
    }

//    * 
//   * *
//  * * *
// * * * *
// * * * *
//  * * *
//   * *
//    *
        return 0;
}