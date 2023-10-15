#include <bits/stdc++.h> 
void sortArray(vector<int>& arr, int n)
{
    // Write your code here
    int i = 0; 
    int j =n-1;
    while(i <j){
        if(arr[i] == 2){
            swap(arr[i],arr[j]);
            j--;
        }else if(arr[i] ==1){
            swap(arr[i],arr[i+1]);
        }else{
            i++;
        }
    }
}
