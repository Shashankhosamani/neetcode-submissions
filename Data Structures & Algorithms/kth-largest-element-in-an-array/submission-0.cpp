class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
       multiset<int> mp;
        for(int i=0;i<nums.size();i++){
            mp.insert(nums[i]);
        }
        int i=0;
        int ele;
        for(auto it=mp.rbegin();it!=mp.rend();it++){
            i++;
            if(i==k){
                ele=*it;
                break;
            }
        }
        return ele;
        
    }
};
