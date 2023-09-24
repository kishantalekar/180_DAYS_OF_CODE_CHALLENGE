
#include<iostream>
using namespace std;

int main(){
    int n, count = 0;
    cout << "enter the n number :";
    cin >> n;
   
    for (int i = 1; i <= n; i += 1)
    {
        if(n%i==0){
            count++;
        }
    }
  if(count ==2){
        cout << "prime No";
  }else{
    cout << "Not a prime no";
  }
    return 0;
}