#include<iostream>
using namespace std;

int partition(int arr[],int low ,int high){
    int pivot = arr[low];
    int i = low;
    int j = high;
    while( i < j){
        while(arr[i]<=pivot){
            i++;
        }
        while (arr[j]>pivot)
        {
            j--;
        }
        if(i <j){
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    arr[low  ] = arr[j];
    arr[j] = pivot;
    return j;
}
void quicksort(int arr[],int low,int high){
    if(low <high){
        int pivot = partition(arr, low, high);
        quicksort(arr, low, pivot - 1);
        quicksort(arr, pivot+1,high);
    }
}
int main(){
    int arr[] = {4, 6, 2, 5, 7, 9, 1, 3};
    int n = sizeof(arr) / sizeof(int);

    for(int i :arr){
        cout << i << " ";
    }
    cout << endl;
    quicksort(arr, 0, n - 1);
    for(int i :arr){
        cout << i << " ";
    }
    return 0;
}