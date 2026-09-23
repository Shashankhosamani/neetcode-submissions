class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> res(n+1,0);
        for(int i=1;i<=n;i++){
            int ind=i;
            int count=0;
            while(ind!=0){
                count++;
                ind = ind & (ind-1);
            }
            res[i]=count;
        }
        return res;
    }
};
