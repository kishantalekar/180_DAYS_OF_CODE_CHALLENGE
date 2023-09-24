#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "enter the no";
    cin >> n;
    for (int i = 1; i < 10; i += 1)
    {
        cout << n<<" "<<" * "<<i<<" "<<" = "<<n*i<<endl;
    }

        return 0;
}