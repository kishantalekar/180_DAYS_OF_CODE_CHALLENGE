class Solution {
public:
    int trap(vector<int>& height) {
        
        stack<int> st1;

        int n = height.size();
        vector<int> arr1(n,0),arr2(n,0);
        for(int i = n-1; i >= 0; i--){

            while(!st1.empty() && st1.top() <= height[i]){
                st1.pop();
            }
            if(!st1.empty()){
                arr1[i] =st1.top();
            }
            if(st1.empty() || height[i] > st1.top()){
            st1.push(height[i]);
            }
        }
        while(!st1.empty()){
            st1.pop();
        }
        for(int i = 0; i < n; i++){

            while(!st1.empty() && st1.top() <= height[i]){
                st1.pop();
            }
            if(!st1.empty()){
                arr2[i] = st1.top();
            }
            if(st1.empty() || height[i] > st1.top())
            st1.push(height[i]);
        }
        int sum = 0;
        for(int i = 0; i < n; i++){
           if(min(arr1[i],arr2[i]) - height[i] > 0){
               sum += (min(arr1[i],arr2[i]) - height[i]);
           }
        }
        return sum;
    }
};