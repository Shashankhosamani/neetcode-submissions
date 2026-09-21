class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> res;
        unordered_map<int,int> map;
        for(int i=0;i<nums.size();i++){
            map[nums[i]]=i;
        }
        int i=0;
        while(i<nums.size()){
            int diff=target - nums[i];
            if(map.find(diff)!=map.end() && map.find(diff)->second!=i){
                res.push_back(i);
                res.push_back(map.find(diff)->second);
                break;
            }
            i++;
        }
        sort(res.begin(),res.end());
        return res;
    }
};
