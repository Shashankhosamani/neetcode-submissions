class Solution {
public:
    bool solve(int n, set<int> & seen){
        int sqsum=0;
        while (n>0){
            int last=n%10;
            sqsum=sqsum+(last*last);
            n=n/10;

        }
        if(sqsum==1) return true;
        else if(seen.find(sqsum)!=seen.end()){
            return false;
        }
        seen.insert(sqsum);
        return solve(sqsum,seen);
    }
    bool isHappy(int n) {
        set<int> seen;
        return solve(n,seen);
    }
};
