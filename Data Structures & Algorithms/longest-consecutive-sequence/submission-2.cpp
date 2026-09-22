class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int> s;

        for (int x : nums) {
            s.insert(x);
        }

        int maxi = 0;
        int count = 0;
        int prev = 0;
        bool first = true;

        for (auto c : s) {
            if (first || c == prev + 1) {
                count++;
            } else {
                count = 1;
            }

            maxi = max(maxi, count);
            prev = c;
            first = false;
        }

        return maxi;
    }
};