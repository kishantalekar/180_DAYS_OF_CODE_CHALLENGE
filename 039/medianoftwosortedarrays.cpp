class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size();
        int n2 = nums2.size();

        int total = n1+n2;
        int index1 =total/2 -1;
        int index2 =total/2;
        int ele1 =-1;
        int ele2 =-1;
        int count = 0;
        int i = 0;
        int j =0;

        while(i<n1 && j<n2){
           
            if(nums1[i] <nums2[j]){
                if(count == index1){
             ele1  = nums1[i];
            }
            if(count == index2){
             ele2  = nums1[i];
            }
                i++;
            }else{
                 if(count == index1){
             ele1  = nums2[j];
            }
            if(count == index2){
             ele2  = nums2[j];
            }
                j++;
            }
           
            count++;
        }
        while(i <n1){
            if(count == index1){
             ele1  = nums1[i];
            }
            if(count == index2){
             ele2  = nums1[i];
            }
            count++;
            i++;
           
        }
        while(j <n2){
            if(count == index1){
             ele1  = nums2[j];
            }
            if(count == index2){
             ele2  = nums2[j];
            }
            count++;
            j++;
           
        }

        if(total%2 == 0){
            return ((double)ele1+(double)ele2)/2;
        }else{
            return  (double)ele2;
        }
        return 1;
    }
};