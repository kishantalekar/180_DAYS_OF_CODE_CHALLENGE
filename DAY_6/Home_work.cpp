#include<iostream>
using namespace std;

int main (){


//     First Pattern:
       
//      1
//      1 2
//      1 2 3
//      1 2 3 4
//      1 2 3 4 5 
//      1 2 3 4 5 6 
//      1 2 3 4 5 6

for (int i = 1; i <= 6; i++){
    for (int j = 1; j <= i;j++){
        cout << j;
    }
    cout << endl;
}

// Second Pattern:
   
//     A
//     A B
//     A B C
//     A B C D
//     A B C D E

for (int i = 1; i <= 5;i++){
    char name = 'A' + i - 1;
    for (int j = 1; j <= i;j++){
        cout << name;
    }
    cout << endl;

}

// Third Pattern:
     
//        10
//        10 11
//        10 11 12
//        10 11 12 13
//        10 11 12 13 14
//        10 11 12 13 14 15
for (int i = 10; i <= 15; i++){
    for (int j = 10; j <= i;j++)
        cout << j << " ";

    cout << endl;
}

// Fourth Pattern:

//       A B C D
//       A B C
//       A B
//       A
for (int i = 1; i <= 4; i ++){
    for (int j = 1; j <= 4 - i + 1;j++){
        char name = 'A' + j-1;
        cout << name << " ";

    }
    cout << endl;
}
}