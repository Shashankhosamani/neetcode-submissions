class Solution {
   public:
    int trap(vector<int>& height) {
        if (height.empty()) {
            return 0;
        }
        int n = height.size();
        int start = 0;
        int end = n - 1;
        int leftMax = height[start];
        int rightMax = height[end];
        int totalWater = 0;
        while (start < end) {
            if (leftMax < rightMax) {
                start++;
                leftMax = max(leftMax, height[start]);
                totalWater = totalWater + leftMax - height[start];
            } else {
                end--;
                rightMax = max(rightMax, height[end]);
                totalWater = totalWater + rightMax - height[end];
            }
        }
        return totalWater;
    }
};
