class Solution {
   public:
    int largestRectangleArea(vector<int>& heights) {
        stack<pair<int, int>> st;
        int maxArea = 0;
        int n=heights.size();
        for (int i = 0; i < n; i++) {
            if (st.empty()){
                st.push({i, heights[i]});
            }
            else {
                int start = i;
                while (!st.empty() && st.top().second > heights[i]) {
                    start = st.top().first;
                    int element = st.top().second;
                    maxArea = max(maxArea, (element * (i - start)));
                    st.pop();
                }
                st.push({start, heights[i]});
            }
        }
        while (!st.empty()) {
            int start = st.top().first;
            int element = st.top().second;
            maxArea = max(maxArea, (element * (n - start)));
            st.pop();
        }
        return maxArea;
    }
};
