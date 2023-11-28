#include<bits/stdc++.h>
void immediateSmaller(vector<int>& A)
{
	// Write your code here.
    
    stack<int>st;
    
    for(int i = A.size()-1; i>=0; i--){

		if(!st.empty() && st.top() < A[i]){
			int temp = A[i];

			A[i] = st.top();
			st.push(temp);
		}else{
			st.push(A[i]);
			A[i] = -1;
		}
	}
   
}
