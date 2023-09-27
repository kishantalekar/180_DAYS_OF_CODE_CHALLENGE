#include<iostream>
using namespace std;

int main(){
//     Day 10/180: Pattern Printing-2



// First Pattern: Take an input n from the user, and create a pattern like below, for n=5, we have output like this.


//         1
//       2 1
//     3 2 1
//   4 3 2 1
// 5 4 3 2 1     

 for (int i = 1; i <= 5; i++){
        for (int j = 1; j <= 5 - i ;j++){
            cout << " ";
        }
        for (int k = i; k >= 1; k--){
            cout << k;
        }
        cout << endl;
    }



// Second Pattern: Take an input n from the user, and create a pattern like below, for n=5, we have output like this.
   
    
//         A
//       B B
//     C C C
//   D D D D
// E E E E E

 for (int i = 1; i <= 5; i++){
        for (int j = 1; j <= 5 - i ;j++){
            cout << " ";
        }
        char name = 'A' + i - 1;
        for (int k = 1; k <= i; k++){
            cout << name;
        }
        cout << endl;
    }



// Third Pattern: Take an input n from the user, and create a pattern like below, for n=5, we have output like this.

//         5
//       5 4
//     5 4 3
//   5 4 3 2 
// 5 4 3 2 1
 for (int i = 1; i <=5; i++){
        for (int j = 1; j <= 5 - i ;j++){
            cout << " ";
        }
        for (int k = 1; k <= i; k++){
            cout << 5-k+1;
        }
        cout << endl;
    }
     
       


// Fourth Pattern: Take an input n from the user, and create a pattern like below, for n=5, we have output like this.


//         E
//       E D
//     E D C
//   E D C B
// E D C B A
       for (int i = 1; i <= 5; i++){
        for (int j = 1; j <= 5 - i ;j++){
            cout << " ";
        }
        for (int k = 1; k <= i; k++){
            char name = 'A' + 5 - k;
            cout << name;
        }
        cout << endl;
    }

    return 0;
}