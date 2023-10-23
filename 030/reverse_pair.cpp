int merge(vector<int>& nums,int left,int leftend,int right,int rightend){
    int i = left;
    int j = right;
    int count = 0;

    while(i <= leftend && j <=rightend){
        if((long)(long)nums[i] >(long)(long)2*nums[j]){
            count+=leftend-i+1;
            j++;
        }else{
            i++;
        }
    }
  sort(nums.begin()+left,nums.begin()+rightend+1);
    return count;
}
int mergesort(vector<int>& nums,int start,int end){
    int count = 0;
    if(start>=end)return count;
    
    int mid = start+(end-start)/2;
   count+= mergesort(nums,start,mid);
    count+=mergesort(nums,mid+1,end);
    count+=merge(nums,start,mid,mid+1,end);
    return count;
}
class Solution {
public:
    int reversePairs(vector<int>& nums) {
        int count =0;
        int n = nums.size();
       count =  mergesort(nums,0,n-1);
        return count;
    }
};