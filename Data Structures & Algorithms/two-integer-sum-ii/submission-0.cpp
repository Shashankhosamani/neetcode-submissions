class Solution {
   public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> result;
        int left = 0;
        int n = numbers.size();
        int right = n - 1;
        while (left < right) {
            int sum = numbers[left] + numbers[right];
            if (sum == target) {
                result.push_back(left+1);
                result.push_back(right+1);
            }
            if (sum < target) {
                left++;
            } else {
                right--;
            }
        }
        return result;
    }
};
