#include<iostream>

using namespace std;

int main(){
    int arr[] = {14, 9, 15, 12, 6, 8, 13};
    int n = sizeof(arr) / sizeof(int);
    for (int i = 1; i < n - 1;i++){
        int j = i - 1;
        int temp = arr[i];
        while(j<=0 && arr[j] > temp){
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j+1] = temp;
    }
     for (int i : arr){
        cout << i << " ";
        }
        return 0;
}