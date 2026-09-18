class Solution {
public:
int maxSteps(int n , unordered_map<int, int >& map){
    if(n==1||n==0) return 1;
    if(!map[n]){
        map[n]=maxSteps(n-1,map)+maxSteps(n-2,map);
    }
    return map[n];
}
    int climbStairs(int n) {
        if(n==0||n==1) return 1;
        unordered_map<int,int> map;

        return maxSteps(n,map);
    }
};
