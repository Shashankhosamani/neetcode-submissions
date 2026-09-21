class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        if(nums[0]!=0) return 0;
        int n=nums.size();
        int max=nums[n-1];
        int sumall=0;
        int sumarr=0;
        for(int i=0;i<=n;i++){
                sumall=sumall+i;
        }
        for(int i=0;i<n;i++){
            sumarr=sumarr+nums[i];
        }
        return sumall-sumarr;
    }
};
