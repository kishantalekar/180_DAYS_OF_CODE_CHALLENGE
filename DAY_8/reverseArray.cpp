#include<iostream>
using namespace std;



// int main(){

// Input  : arr[] = {1, 2, 3}
// Output : arr[] = {3, 2, 1}

// Input :  arr[] = {4, 5, 1, 2}
// Output : arr[] = {2, 1, 5, 4}

// int arr[] = {1, 2, 3, 4, 5};
// int j = sizeof(arr) / sizeof(int) -1;

// for (int i = 0; i <sizeof(arr)/sizeof(int)/2; i++)
// {
//     int temp = arr[i];
//     arr[i] = arr[j];
//     arr[j] = temp;
//     j--;
// }
// for (int i = 0; i < sizeof(arr) / sizeof(int);i++){
//     cout << arr[i] <<" ";
// }
//     return 0;
// }

void reverseArray(int arr[],int start,int end){
    if(start >end){
        return;
    }else{
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        reverseArray(arr, start + 1, end - 1);
    }

}
int main(){
    int arr[] = {1, 2, 3, 4, 5, 6};

    for (int i = 0; i < sizeof(arr) / 4; i++)
        cout << arr[i] << ">>";

    cout << endl;
    int n = (sizeof(arr) / sizeof(int) - 1);
    reverseArray(arr, 0,n);
    for (int i = 0; i < sizeof(arr) / 4; i++)
        cout << arr[i] << ">>";
}