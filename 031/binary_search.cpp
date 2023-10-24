int binarySearch(vector<int> &nums, int target,int low,int high){
    if(low >high){
        return -1;
    }
    int mid = (low+high)/2;

    if(nums[mid] == target){
        return mid;
    }else if(target >nums[mid]){
        return binarySearch(nums,target,mid+1,high);
    }else{
        return binarySearch(nums,target,low,mid-1);
    }
}
int search(vector<int> &nums, int target) {
    // Write your code here.
    int low = 0;
    int high = nums.size()-1;
    return binarySearch(nums,target,low,high);
}