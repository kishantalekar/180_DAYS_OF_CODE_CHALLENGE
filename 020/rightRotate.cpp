void reverse(vector<int>& arr, int l,int r){
    while(l<r){
        swap(arr[l++],arr[r--]);
    }
}
class Solution {
public:
    void rotate(vector<int>& arr, int k) {
        int n = arr.size();
        k = k%arr.size();
        if(k!=0){
        reverse(arr.end()-k,arr.end());
        reverse(arr.begin(),arr.end()-k);
        reverse(arr.begin(),arr.end());
        }
    }
};