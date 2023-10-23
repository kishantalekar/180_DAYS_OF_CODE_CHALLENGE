#include<bits/stdc++.h>
vector<int> findMissingRepeatingNumbers(vector < int > a) {
    // Write your code here
    int n = a.size();
    int sum = 0,sum2=0;
   for(int i= 0; i<n;i++){
       sum+=a[i];
       sum2 += a[i]*a[i];
   }
   int sn = (n*(n+1))/2;
   int sn2 = (n*(n+1)*(2*n+1))/6;


   int val1 = sum-sn;
   int val2 = sum2-sn2;

   val2 = val2/val1;

   int x = (val1+val2)/2;

   int y = x-val1;

  
    return {x,y};

}