class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int repeated_num;
        unordered_map<int,int> map;
        for(int i=0;i<nums.size();i++){
            map[nums[i]]++;
        }
        for(auto c:map){
            if(c.second>1){
                repeated_num=c.first;
            }
        }
        return repeated_num;

        
    }
};
