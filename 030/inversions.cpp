void merge(vector<int>&a,int start,int mid,int leftend,int end,int &count){
    int i = start;
    int j = leftend;
    vector<int>temp;

    while(i <=mid && j <=end){
        if(a[i] <= a[j]){
            temp.push_back(a[i]);
            i++;
        }else{
            count +=mid-i+1;
            temp.push_back(a[j]);
            j++;
        
        }
    }
    while(i <=mid){
        temp.push_back(a[i]);
        i++;
    }
    while( j <=end){
        temp.push_back(a[j]);
        j++;
    }
    for(int k= 0; k<temp.size(); k++){
        a[start] = temp[k];
        start++;
    }
    // return count;

}
void mergeSort(vector<int>&a,int start,int end,int &count){
    if(start >= end)return;

    int mid = (start+end)/2;
    mergeSort(a,start,mid,count);
    mergeSort(a,mid+1,end,count);
    merge(a,start,mid,mid+1,end,count);
    
}
int numberOfInversions(vector<int>&a, int n) {
    // Write your code here.
    int count = 0;
    // sort(a.begin(),a.end());
   mergeSort(a,0,n-1,count);
    return count;
}