class Solution {
public:
    int findMin(vector<int> &nums) {
        int minele=0;
        int left=0;
        int right=nums.size()-1;
        while(left<=right){
            minele=min(nums[left],nums[right]);
            if(nums[left] < nums[right]){
                right--;
            }
            else{
                left++;
            }
        }
        return minele;
    }
};
