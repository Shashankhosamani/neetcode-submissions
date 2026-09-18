class Solution {
public: 

    int maxSum(vector<int>& nums, int i,unordered_map<int,int>&memo){
        if(i==0) return nums[0];
        if(memo.find(i)==memo.end()) {
            memo[i]=max(nums[i],nums[i]+maxSum(nums,i-1,memo));
        }
        return memo[i];
    }
    int maxSubArray(vector<int>& nums) {
        if(nums.size()==0) return 0;
        if(nums.size()==1) return nums[0];
        unordered_map<int,int>memo;
        int maxsum=INT_MIN;
        for(int i=0;i<nums.size();i++){
            int cursum=maxSum(nums,i,memo);
            maxsum=max(maxsum,cursum);
        }
        return maxsum;
        
    }
};