#include<iostream>
using namespace std;

int main(){
    // for (int i = 0; i < 5;i++){
    //     for (int j = 0; j <= i;j++){
    //         cout << "*";
    //     }
    //     cout << "\n";
    // }

    //  for (int i = 0; i < 5;i++){
    //     for (int j = 5; j >0;j--){
    //         cout << j;
    //     }
    //     cout << "\n";
    // }
    //  for (int i = 1; i <=5;i++){
    //     for (int j = 1; j <=5;j++){
    //         cout << j*j << " ";
    //     }
    //     cout << "\n";
    // }

    //  for (char i = 'a'; i < 'f';i++){
    //     for (char j = 'a'; j <'f';j++){
    //         cout << j <<" ";
    //     }
    //     cout << "\n";
    // }

    // for (int i = 1; i <= 5; i ++){
    //     for (int j = 1; j <= 5; j++){
    //         cout << ((i-1)*5)+j << " ";
    //     }
    //     cout << endl;
    // }

//     First Pattern:

//        4 4 4 4 4 4
//        4 4 4 4 4 4
//        4 4 4 4 4 4  
//        4 4 4 4 4 4
//        4 4 4 4 4 4

    // for (int i = 0; i < 5; i++){
    //     for (int j = 0; j < 5; j++){
    //         cout << 4 << " ";
    //     }
    //     cout << endl;
    // }

        // Second Pattern:

        //        1 4 9 16 25
        //        1 4 9 16 25
        //        1 4 9 16 25
        //        1 4 9 16 25
        //        1 4 9 16 25
        //        1 4 9 16 25

    //      for (int i = 1; i <= 5; i++){
    //     for (int j = 1; j <= 5; j++){
    //         cout << j*j << " ";
    //     }
    //     cout << endl;
    // }

        //    Third Pattern:

        //     1 8 27 64 125 216
        //     1 8 27 64 125 216
        //     1 8 27 64 125 216
        //     1 8 27 64 125 216
        //     1 8 27 64 125 216

    //      for (int i = 1; i <= 5; i++){
    //     for (int j = 1; j <= 5; j++){
    //         cout << j*j*j << " ";
    //     }
    //     cout << endl;
    // }
        // Fourth Pattern:

    for (int i = 1; i <= 5; i++){
        for (int j = 0; j <= 5; j++){
        char name = 'F'+j;
           
            cout << (name )<<" ";
        }
        cout << endl;
    }
        // F G H I J K
        // F G H I J K
        // F G H I J K
        // F G H I J K
        // F G H I J K

        return 0;
}