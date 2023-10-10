#include<iostream>
using namespace std;

void merge(int[], int[], int, int, int);
void mergeSort(int arr[],int temp [],int start,int end){
    if(start < end){
        int mid = (start + end) / 2;
        mergeSort(arr, temp, start, mid);
        mergeSort(arr, temp,mid+1, end);
        merge(arr, temp, start, mid + 1, end);
    }
}
void merge(int arr[],int temp[],int left,int mid,int right){
    int left_end = mid - 1;
    int size = right - left + 1;
    int temp_pos = left;
    while(left <=left_end && mid <=right){
        if(arr[left] <= arr[mid]){
            temp[temp_pos] = arr[left];
            left++;
            temp_pos++;
        }else{
            temp[temp_pos] = arr[mid];
            mid++;
            temp_pos++;
        }
    }
    while(left <=left_end){
        temp[temp_pos] = arr[left];
        left++;
        temp_pos++;
    }
    while(mid <=right){
        temp[temp_pos] = arr[mid];
        mid++;
        temp_pos++;
    }
    for (int i = 0; i <= size;i++){
        arr[right] = temp[right];
        right--;
    }
}
int main(){
    int arr[] = {54, 26, 93, 17, 31, 44, 55};
    int n = sizeof(arr) / sizeof(int);
    int temp[n];

    cout << "before sorting ";
    for(int i : arr)
        cout << i << endl;

    mergeSort(arr, temp, 0, n);
    cout << "after sorting ";
    for(int i : arr)
        cout << i << endl;
}