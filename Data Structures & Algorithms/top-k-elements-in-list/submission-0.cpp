class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int> res;
        unordered_map<int,int> freq;
        for(auto c:nums){
            freq[c]++;
        }
        vector<vector<int>> buckets(n+1);

        for(auto x:freq){
            buckets[x.second].push_back(x.first);
        }

        for(int i=n;i>=0;i--){
            for(auto b:buckets[i]){
                res.push_back(b);
            }
            if(res.size()==k){
                return res;
            }
        }
        return {};
    }
};
