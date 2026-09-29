class Solution {
   public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> result;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size()-2; i++) {
            int left = i + 1;
            int right = nums.size() - 1;
            int target = -1 * nums[i];
            if (i > 0 && nums[i] == nums[i - 1]) continue;
            while (left < right) {
                if (nums[left] + nums[right] == target) {
                    result.push_back({nums[left], nums[right], nums[i]});
                    left++;
                    right--;
                    while (left < right && nums[left] == nums[left - 1]) left++;

                    while (left < right && nums[right] == nums[right + 1]) right--;
                } else if ((nums[left] + nums[right]) < target) {
                    left++;
                } else {
                    right--;
                }
            }
        }
        return result;
    }
};
