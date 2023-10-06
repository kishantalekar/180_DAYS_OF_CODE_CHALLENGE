#include<iostream>
#include<string.h>
using namespace std;

void printName(string name,int n){
    if(n == 0){
        return;
    }else{
        cout << name << " ";
        printName(name,n-1);
    }
}
void printTilN(int n){
    if(n == 0){
        return;
    }else{
        printTilN(n - 1);
        cout << n << endl;
    }
}
void printNto1(int n,int i){
    if(i>n){
        return;
    }else{
        printNto1(n, i + 1);
        cout << i << endl;
    }
}
int main(){
    string name = "Kishan";
    // printName(name,5);//print name 5 times using recursion.
    int n;
    cin >> n;
    // printTilN(n);//print n -1 and vice -versa
    printNto1(n,1);
}