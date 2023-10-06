#include<iostream>
#include<string>
using namespace std;

void reverse(int arr[],int start,int end){
if(start > end){
    return;
}
    reverse(arr, start+1, end-1);
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
}
bool pal(string str,int start,int end){
    if(start >=end){
    return true;
    }
    if(str[start] !=str[end]){
    return false;
    }else{
    return pal(str, start+1, end-1);
    }
}
int main(){
    // int arr[] = {1, 2, 3, 4};
    // for(int i :arr)
    // cout << i << "-";

    // reverse(arr, 0, 3);
    // cout << endl;
    // for(int i :arr)
    // cout << i << "-";

    string str = "madam";
    bool result = pal(str,0,str.length()-1);
    cout << result;
    return 0;
}