class Solution {
public:
    int largestRectangleArea(vector<int>& h) {
        int maxHeight = 0;

        vector<pair<int,int>>st;
        int n = h.size();
        for(int i = 0; i < n; i++){
            int start = i;
            while(!st.empty() && st.back().second >h[i]){
                int index = st.back().first;
                int height = st.back().second;

                maxHeight = max(maxHeight,height *(i - index));
                start = index;
                st.pop_back();
            }
            st.push_back({start,h[i]});
        }


        for(auto it : st){
            int index = it.first;
            int height = it.second;

            maxHeight = max(maxHeight,height *(n -index));
        }
        return maxHeight;
    }
};
