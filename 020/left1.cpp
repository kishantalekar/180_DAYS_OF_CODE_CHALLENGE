#include <bits/stdc++.h> 
vector<int> rotateArray(vector<int>& arr, int n) {
    // Write your code here.
    for(int i = 1,j = 0; i<n; i++,j++){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;

    }
    return arr;
}
