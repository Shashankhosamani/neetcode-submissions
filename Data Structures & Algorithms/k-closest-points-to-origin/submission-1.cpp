class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        multimap<int,vector<int>>mp;
        for(auto c:points){
            int result=(c[0]-0)*(c[0]-0)+(c[1]-0)*(c[1]-0);
            mp.insert({result,c});
        }
        vector<vector<int>> result;
        int i=0;
        for(auto c:mp){
            result.push_back(c.second);
            i++;
            if(i==k) break;
        }
        return result;
    }
};
