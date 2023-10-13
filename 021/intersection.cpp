
void sortarr(vector<int>& arr,int n){
    int i, j;
    bool swapped;
    for (i = 0; i < n - 1; i++) {
        swapped = false;
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
 
        if (swapped == false)
            break;
    }
}
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int n =nums1.size();
        int m  = nums2.size();
        sortarr(nums1,n);
        sortarr(nums2,m);
        int i = 0,j = 0;
        vector<int>temp;
        while(i <n && j <m){
            if(nums1[i] == nums2[j]){
                while(i<n-1&&nums1[i] == nums1[i+1])
                i++;

                while(j<m-1&&nums2[j] == nums2[j+1])
                j++;

                temp.push_back(nums1[i]);
                i++;
                j++;

            }else if(nums1[i]<nums2[j]){
                i++;
            }else{
                j++;
            }

        }
        return temp;
        
    }
};