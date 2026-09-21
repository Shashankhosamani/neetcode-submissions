class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int max=nums[n-1];
        int sumall=0;
        int sumarr=0;
        sumall=n*(n+1)/2;
        for(int i=0;i<n;i++){
            sumarr=sumarr+nums[i];
        }
        return sumall-sumarr;
    }
};
