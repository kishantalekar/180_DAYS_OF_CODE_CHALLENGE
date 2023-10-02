#include<iostream>
using namespace std;

int main(){
    int i = 1;
    // while(i <10){
    //     cout << i <<endl;


    //     i++;
    // }

//     do{
// cout << i <<endl;
// i++;
//     } while (i < 10);

//break

// while (i <10){
//     if(i == 5)break;
//     cout << i << endl;
//     i++;
// }


// while (i <10){
//     i++;
//     if(i == 5)continue;
//     cout << i << endl;
// }

//switch
    int n;
    cin >> n;
    switch (n)
    {
    case /* constant-expression */ 1:
        /* code */
        cout << "hello";
        break;

    case 2:
        cout << "world";
        break;
    default:
        cout << "invalid";
        break;
}
    return 0;
}