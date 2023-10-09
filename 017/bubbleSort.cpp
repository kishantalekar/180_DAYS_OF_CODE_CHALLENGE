#include<iostream>
using namespace std;

int main(){
    int arr[] = {1, 6, 8, 2, 4, 9,3};
    int n = sizeof(arr) / sizeof(int);
    cout << n << endl;
    for (int i = 0; i < n-1; i++){
        int swapped = false;
        for (int j = 0; j < n - i-1;j++){
            if(arr[j]>arr[j+1]){
                swapped = true;
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
        if(swapped == false)
        break;
    }
    for (int i : arr){
        cout << i << " ";
        }
        return 0;
}