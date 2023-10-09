#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {1, 6, 8, 2, 4, 9};

    int min;
    for (int i = 0; i < sizeof(arr) / 4;i++){
        min = i;
        int j = i + 1;

        while (j<sizeof(arr)/4){

            if(arr[j]<arr[min]){
                min = j;
            }
            j++;
        }
        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
        }
        for (int i : arr){
        cout << i << " ";
        }
}