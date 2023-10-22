#include<vector>

void mergeTwoSortedArraysWithoutExtraSpace(vector<long long> &a, vector<long long> &b){
	// Write your code here.
	int m = a.size();
	int n = b.size();
	int i = m-1;
        int j  = 0;
      while(i >=0 && j <n){
          if(a[i] >b[j]){
              swap(a[i],b[j]);
              i--;
              j++;
          }else{
              break;
          }
      }
      sort(a.begin(),a.end());
      sort(b.begin(),b.end());
}